#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
  int array[5] = {1, 2, 3, 4, 5}, secondary[5] = {1, 2, 3, 4, 5};
  std::cout << sum_two_arrays(array, secondary, 5) << std::endl;
  return 0;
}