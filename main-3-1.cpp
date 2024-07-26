#include <iostream>

extern int is_fanarray(int[], int);

int main() {
  int array[5] = {5, 4, 3, 4, 5};
  std::cout << is_fanarray(array, 5) << std::endl;
  return 0;
}
