#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void tofile(){  
  string name;
  int prn;
  string course;
  
  fstream file;
  file.open ("example.txt", ios::out | ios::in );

  cout << "\n Enter your name:" ;
  getline(cin, name);
  
  file << name <<endl;
  file >> name;
  cout << name << endl;
  
  cout << "\n Enter your roll number:" ;
  cin >> prn ;
  
  file << prn <<endl;
  file >> prn;
  cout << prn << endl;
  
  cout << "\n Enter your course:" ;
  getline(cin, course);
  getline(cin, course);
  
  file << course <<endl;
  file >> course;
  cout << course << endl;

  file.close();
}

