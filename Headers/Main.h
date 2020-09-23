#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include "Login.h"
#include "SignUp.h"
#include "loading.h"
#include "os.h"

using namespace std;

void mainfunction()
{
    loading();
    int choice;
    do
    {
    start:
        cout << "\nMenu:\n1.Login\n2.SignUp\n3.Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            islinux ? system("clear") : system("cls");
            login();
            break;
        case 2:
            islinux ? system("clear") : system("cls");
            signup();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Wrong choice!";
            goto start;
            break;
        }
    } while (choice != 4);
}
#endif