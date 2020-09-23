#ifndef MAIN_H
#define ENCRYPTDECRYPT_H //DO NOT REMOVE THESE HEADERS ELSE WILL RESULT IN ERROR
#include <iostream>
#include "users.h"
using namespace std;

users u;
void encryption(){
    int i,key;
    char ch;
    cout<<"encryption...";
    cout<<"Password : ";
    cin>>u.password;
    key=3;
    for(i=0;u.password[i]!='\0';i++)
    {
        ch=u.password[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch+key;
        }
        else if(ch<'a')
        {
            ch=ch+32;
            ch=ch+key;
        }
        u.password[i]=ch;
        cout<<u.password;
    }

}

void decryption(){
    int i,key=3;
    char ch;
    cout<<"decryption...";
    cout<<u.password;
    for(i=0;u.password[i]!='\0';i++)
    {
        ch=u.password[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch-key;
        }   
        else if(ch<'a')
        {
            ch=ch+32;
            ch=ch-key;
        }
        u.password[i]=ch;
        cout<<u.password;
    }
}
#endif