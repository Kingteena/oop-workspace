#include <iostream>

extern int binary_to_int(int[], int);

int main() {
  int array[5] = {1, 0, 1, 1, 1};
  std::cout << binary_to_int(array, 5) << std::endl;
  return 0;
}
