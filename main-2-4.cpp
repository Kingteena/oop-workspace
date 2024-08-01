#include <iostream>

extern int sum_min_max(int[], int);

int main() {
  int array[5] = {4, 2, 7, 4, 5};
  std::cout << sum_min_max(array, 5) << std::endl;
  return 0;
}
