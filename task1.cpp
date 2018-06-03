/*
* Author: Onufriev Alexey
* varik 8
* task 1
* Created on 3 june 2018 y., 14:41
*/

#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <math.h>

using namespace std;

int main() {
  const float pi = 3.14;
  float S1, S2, a, r;
  // вводим сторону квадрата чтобы найти площадь его
  cout << "вводим сторону квадрата чтобы найти площадь его" << endl;
  cin >> a;
  // находим площадь квадрата по формуле одна сторона в квадрате
  S1 = pow(a, 2);
  cout << "площадь квадрата = " << S1 << endl;
  cout << "вводим радиус круга чтобы найти площадь его" << endl;
  cin >> r;
  // находим площадь круга по формуле пи на радиус в квадрате
  S2 = pi * pow(r, 2);
  cout << "площадь круга = " << S2 << endl;
  // проверка вписаный ли круг в квадрат по формуле
  if(S2 <= pi * pow(a / 2, 2)) {
    cout << "Круг вписаный в квадрат" << endl;
  }
  if(S2 > pi * pow(a / 2, 2)) {
    cout << "Круг не вписаный в квадрат" << endl;
  }
  // проверка на то что квадрат вписаный в круг или нет
  if(S2 >= pi * 0.5 * pow(a, 2)) {
    cout << "Квадрат вписан в круг" << endl;
  }
  if(S2 <= pi * 0.5 * pow(a, 2)) {
    cout << "Квадрат не вписан в круг" << endl;
  }
};