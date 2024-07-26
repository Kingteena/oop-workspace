#include <iostream>

extern double array_mean(int[], int);

int main() {
  int array[2] = {1, 2};
  std::cout << array_mean(array, 2) << std::endl;
  return 0;
}