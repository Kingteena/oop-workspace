#include <iostream>

extern double* duplicateArray(double*, int);

using namespace std;

void print_array(double *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  double array[] = {5.0, 3.1, -3.2}, *new_array;
  int size = 3;

  print_array(array, size);
  new_array = duplicateArray(array, size);
  print_array(new_array, size);

  delete[] new_array;
}