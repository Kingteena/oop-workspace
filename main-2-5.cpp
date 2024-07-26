#include <iostream>

extern int is_descending(int[], int);

int main() {
  int array[5] = {5, 4, 3, 2, 1};
  std::cout << is_descending(array, 5) << std::endl;
  return 0;
}
