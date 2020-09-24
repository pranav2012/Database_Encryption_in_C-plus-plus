#include <iostream>
#include "Login.h"
#include "SignUp.h"
#include "loading.h"

using namespace std;

void mainfunction()
{
    bool islinux=false;
    loading(islinux);
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
            login(islinux);
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