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

struct Array {
  int x[5], y[5], z[5];
};
struct Array arr;

void write_X_file () {
  cout << "write to X file" << endl;
  ofstream file ("x.txt");
  for(int i = 0; i <= 5; i++) {
    cin >> arr.x[i];
    file << arr.x[i] << endl;
  }
}

void write_Y_file () {
  cout << "write to Y file" << endl;
  ofstream file ("y.txt");
  for(int i = 0; i <= 5; i++) {
    cin >> arr.y[i];
    file << arr.y[i] << endl;
  }
}

void read_X_file () {
  ifstream file("x.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    cout << buff << endl;
  }
  file.close();
}

void read_Y_file () {
  ifstream file("y.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    cout << buff << endl;
  }
  file.close();
}

void write_Z_file () {
  cout << "write to Z file" << endl;
  ofstream file ("z.txt");
  for(int i = 0; i <= 5; i++) {
    arr.z[i] = ( pow(arr.x[i], 2) + pow(arr.y[i], 2) ) / 2;
    file << arr.z[i] << endl;
  }
}

void read_Z_file () {
  ifstream file("z.txt");
  char buff[50];
  while(!file.eof()){
    file.getline(buff, 500);
    cout << buff << endl;
  }
  file.close();
}

int main () {
  cout << "=======================" << endl;
  write_X_file();
  cout << "read x file" << endl;
  read_X_file();

  cout << "=======================" << endl;
  write_Y_file();
  cout << "read y file" << endl;
  read_Y_file();

  cout << "=======================" << endl;
  write_Z_file();
  cout << "read z file" << endl;
  read_Z_file();
}