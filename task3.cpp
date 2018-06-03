/*
* Author: Onufriev Alexey
* varik 8
* task 2
* Created on 3 june 2018 y., 14:41
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <math.h>

using namespace std;


struct colo {
  float r, d, S;
};
struct colo col;

void writeR () {
  cout << "write radius ";
  cin >> col.r;
}

float findS (float pi) {
  col.S = pi * pow(col.r, 2);
}

float findD () {
  col.d = pow(col.r, 2);
}

float readColo () {
  cout << "radius = " << col.r << endl;
  cout << "diametr = " << col.d << endl;
  cout << "plosad = " << col.S << endl;
}

float modifedColo (float pi) {
  cout << "====================" << endl;
  cout << "add to radius ";
  float add;
  cin >> add;
  col.r += add;

  findS(pi);
  findD();
  readColo();
}

int main() {
  const float pi = 3.14;
  writeR();
  findS(pi);
  findD();
  readColo();
  modifedColo(pi);
}