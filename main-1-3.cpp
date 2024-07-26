#include <iostream>

extern int num_count(int[], int, int);

int main() {
  int array[5] = {1, 2, 2, 3, 1};
  std::cout << num_count(array, 5, 2) << std::endl;
  return 0;
}