#include <cmath>
#include <iostream>

using namespace std;

void print_binary_str(string decimal_number) {
  int decimal = stoi(decimal_number), binary = 0, count = 0;

  while (decimal > 1) {
    binary += (decimal % 2) * pow(10, count);
    decimal /= 2;
    count++;
  }

  binary += (decimal % 2) * pow(10, count);

  cout << binary << endl;
}