#include <iostream>

extern int max_element(int[], int);

int main() {
  int array[5] = {2, 3, 4, 5, 1};
  std::cout << max_element(array, 5) << std::endl;
  return 0;
}
