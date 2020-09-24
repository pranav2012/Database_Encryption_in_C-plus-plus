#include <iostream>
using namespace std;

string password = "1234";

void encryption(){
    int i,key;
    char ch;
    cout<<"encryption...";
    cout<<"Password : ";
    cin>>password;
    key=3;
    for(i=0;password[i]!='\0';i++)
    {
        ch=password[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch+key;
        }
        else if(ch<'a')
        {
            ch=ch+32;
            ch=ch+key;
        }
        password[i]=ch;
        cout<<password;
    }

}

void decryption(){
    int i,key=3;
    char ch;
    cout<<"decryption...";
    cout<<password;
    for(i=0;password[i]!='\0';i++)
    {
        ch=password[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch-key;
        }   
        else if(ch<'a')
        {
            ch=ch+32;
            ch=ch-key;
        }
        password[i]=ch;
        cout<<password;
    }
}