#include <iostream>

#include "workshop.h"

using namespace std;

int main() {
  // // Part 2
  // double double_variable = 56.2;
  // changeValue(&double_variable);
  // cout << double_variable << endl;

  //   double array[] = {12.0, 13.5, 2.6};

  //   // Part 3
  //   printArray(array, 3);

  //   // Part 4
  //   cout << arrayMax(array, 3) << endl;

  // Part 5

  double *array = dynamicArray(5, 3.1);

  printArray(array, 5);
  cout << arrayMax(array, 5) << endl;
  delete[] array;

  return 0;
}