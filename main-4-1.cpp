extern int *readNumbers();
extern int secondSmallestSum(int *, int);

#include <iostream>

using namespace std;

int main() {
  int *numbers = readNumbers();

  cout << secondSmallestSum(numbers, 10) << endl;

  delete numbers;

  return 0;
}