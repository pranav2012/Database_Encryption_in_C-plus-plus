#ifndef SIGNUP_H
#define SIGNUP_H
#include <iostream>
#include <string.h>
#include "users.h"
using namespace std;
void users::sign_up()
{
  cout << "PLEASE MENTION OUR DETAILS BELOW \n";
  cout << "Please Enter usersname:\n";
  cin >> users_name;
  cout << "Please enter your course name:\n";
  cin >> course;
  cout << "Please enter your current year:\n";
  cin >> year;
  cout << "Please enter your ROLL NO.:\n";
  cin >> rollno;
  int s = 0;
start:
  cout << "Please Enter Password(password must be atleast 8 characters):\n ";
  cin >> password;
  if (password.length() < 8)
  {
    s++;
    if (s < 3)
    {
      cout << "Password must be having atleast 8 characters\n";
      getchar();
      goto start;
    }
    else
    {
      cout << "SEEMS LIKE YOU ENTERED PASSWORD LESS THAN 8 CHARACTERS TOO MANY TIMES PLEASE REGISTER AGAIN :(\n";
    }
  }
  else
  {
    int i = 0;
  back:
    cout << "Please Re-Enter the Password again:\n ";
    cin >> passwordcheck;
    if (password.compare(passwordcheck) == 0)
    {
      cout << "You are registered successfully!!!!!:)\n";
    }
    else
    {
      cout << "The password previously entered is not matching with the current password :(\n";
      i++;
      if (i < 3)
        goto back;
      else
      {
        cout << "SEEMS LIKE YOU ENTERED MISMATCHING PASSWORD MANY TIMES PLEASE REGISTER AGAIN :(\n";
      }
    }
  }
}
void signup()
{
  users obj1;
  obj1.sign_up();
}
#endif