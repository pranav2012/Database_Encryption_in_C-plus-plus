#include <iostream>
#include <string.h>

using namespace std;

void signup()
{
  string users_name, rollno, year, course, password, passwordcheck;
  cout << "PLEASE MENTION YOUR DETAILS BELOW \n";
  cout << "Please Enter usersname:\n";
  getline(cin, users_name); //please dont remove getline its added twice bcos of an error
  getline(cin, users_name);
  cout << "Please enter your course name:\n";
  getline(cin, course);
  cout << "Please enter your current year:\n";
  getline(cin, year);
  cout << "Please enter your ROLL NO.:\n";
  getline(cin, rollno);
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
