#include <iostream>
#include "Login.h"
#include "SignUp.h"
#include "loading.h"
using namespace std;

void mainfunction(){
    loading();
    int choice;
    do{
        start:
        cout<<"\nMenu:\n1.Login\n2.SignUp\n3.Exit\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            system("clear");
            login();
            break;
        case 2:
            system("clear");
            signup();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<<"Wrong choice!";
            getchar();
            goto start;
            break;
        }
    }while(choice != 4);
}