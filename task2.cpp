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


int main() {
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      for(int q = 1; q <= 9; q++) {
        for(int w = 1; w <= 9; w++) {
          int res = 1 / 2 + 3 + 4 + 5 - 6 + i * j + q * w;
          if( res == 100) {
            cout << "1 / 2 + 3 + 4 + 5 - 6 + ";
            cout << i << " * ";
            cout << j << " + ";
            cout << q << " * ";
            cout << w;
            cout << " = ";
            cout << res << endl;
          }
        }
      }
    }
  }
}
