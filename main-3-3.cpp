#include <iostream>

extern double weighted_average(int[], int);

int main() {
  int array[5] = {5, 4, 3, 4, 5};
  std::cout << weighted_average(array, 5) << std::endl;
  return 0;
}
