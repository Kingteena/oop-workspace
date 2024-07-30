#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int decimal = 0, binary = 0, count = 0;
  cin >> decimal;

  while (decimal > 1) {
    binary += (decimal % 2) * pow(10, count);
    decimal /= 2;
    count++;
  }

  binary += (decimal % 2) * pow(10, count);

  cout << binary << endl;
}