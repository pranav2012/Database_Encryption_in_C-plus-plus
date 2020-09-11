//Contributor : Kushagra Jha
#include <iostream>
#include<fstream>

using namespace std;
int main()
{
    string
    //command line
    command,
    name, password,
    inName, inPassword,
    registerName, registerPassword;

    while(1)
    {
        cout<<"================================================\n";
        cout<<"                     Menu                       \n";
        cout<<"================================================\n";
        cout<<"1.Register\n2.Login\n3.Exit\n"
            <<"\nCommand: ";
        getline(cin, command);

        //(for C strings) if (!strcmp(command, "exit"))
        if (command == "3")
        {
            return 1;
        }
        if (command == "1")
        {
            /*
            ofstream is used for getting data out of file.
            If there is a file called "registration.txt" in the name folder
            Contents will be deletec
            */
            ofstream g("registration.txt");
            if (!g.is_open())
            {
                cout<<"Cannot open File\n";     //To know that program is not executing
                return 0;
            }
            cout<<"\n"  //Gap of one line
                <<"New Username : ";
            getline(cin, registerName);     //User input

            cout<<"New Password : ";
            getline(cin, registerPassword);     //User input

            //It implies putting whatever is to the right into (registration.txt)
            g<<registerName;
            g<<"\n";

            g<<registerPassword;
            g.close();      //close cmd to avoid memmory clog
        }
        if (command == "2")
        {
            ifstream f("registration.txt");     //to get data from (registration.txt)
            if(!f.is_open())
            {
                cout<<"Cannot open file\n";     //Will pop if registration.txt is not open or does not exist
                return 0;
            }
            getline(f, name, '\n');
            getline(f, password, '\n');
            f.close();

            while (1)
            {
                cout<<"\n"
                    <<"Enter Username: ";

                getline(cin, inName);

                cout<<"Enter Password: ";
                getline(cin, inPassword);

                if (inName==name && inPassword==password)
                {
                    cout<<"Login Successful\n"
                        <<"Welcome "
                        <<inName;
                    break;      //Exit while loop if entered right credentials
                }
                cout<<"Incorrect Login ID or Password\n";
            }
            //Account data input 
        }
        cout<<"\n";
    }
    return 1;
}