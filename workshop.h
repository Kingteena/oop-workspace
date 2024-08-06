#include <iostream>

using namespace std;

void changeValue(double* double_ptr) { *double_ptr = 42; }

void printArray(double* array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

double arrayMax(double* array, int size) {
  double max = array[0];
  for (int i = 1; i < size; i++) {
    if (max < array[i]) {
      max = array[i];
    }
  }
  return max;
}

double* dynamicArray(int size, double value) {
  double* dynamic_array = new double[size];

  for (int i = 0; i < size; i++) {
    dynamic_array[i] = value;
  }

  return dynamic_array;
}