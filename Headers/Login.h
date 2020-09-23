//Contributor : Kushagra Jha
#ifndef LOGIN_H
#define LOGIN_H //DO NOT REMOVE THESE HEADERS ELSE WILL RESULT IN ERROR
#include <iostream>
#include "Database.h"
#include "File.h"
#include "users.h"
#include "os.h"

using namespace std;

void login() //run krne ke liye main.cpp run krliyo bhai thora or modify krliyo islo apne hisab se
{
    int i = 0;
    string command, name, password, inName, inPassword, registerName, registerPassword;
    while (i != 3)
    {
        islinux ? system("clear") : system("cls");
        cout << "\n"
             << "Enter Username:\n";
        getline(cin, inName); //please dont remove getline its added twice bcos of an error
        getline(cin, inName);
        cout << "\n"
             << "Enter Password:\n ";
        getline(cin, inPassword);
        if (inName == name && inPassword == password)
        {
            cout << "Login Successful\n"
                 << "Welcome " << inName;
            tofile();
        }
        else
            cout << "Incorrect Login ID or Password\n"; // bro yaha pe na enter krwadiya wapis login krne ke liye direct ja rha hein abhi
        getchar();
        i++;
    }
    cout << "3 wrong attempt's can't Login";
    return;
}
#endif