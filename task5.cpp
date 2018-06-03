/*
* Author: Onufriev Alexey
* varik 8
* task 4
* Created on 3 june 2018 y., 14:41
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <math.h>

using namespace std;

void writeInFile () {
  ofstream file ("file.txt");
  char write[40];
  for(int i = 0; i <= 5; i++) {
    cin >> write;
    file << write << endl;
  }
}

void readAll () {
  ifstream file("file.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    cout << buff << endl;
  }
  file.close();
}

void search_C () {
  ifstream file("file.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    if(buff[0] != 'c' && buff[1] != 'c' && buff[2] != 'c' && buff[3] != 'c' && buff[4] != 'c') {
      cout << buff << endl;
    }
  }
  file.close();
}

void search_Start_F () {
  ifstream file("file.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    if(buff[0] == 'f') {
      cout << buff << endl;
    }
  }
  file.close();
}


int main() {
  writeInFile();
  cout << "=================" << endl;
  cout << "read all text" << endl;
  cout << "=================" << endl;
  readAll();
  cout << "=================" << endl;
  cout << "read words nor c" << endl;
  cout << "=================" << endl;
  search_C();
  cout << "=================" << endl;
  cout << "read words start f" << endl;
  cout << "=================" << endl;
  search_Start_F();
}
