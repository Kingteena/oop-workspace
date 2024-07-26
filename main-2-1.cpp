#include <iostream>

extern int min_element(int[], int);

int main() {
  int array[5] = {2, 3, 4, 5, 6};
  std::cout << min_element(array, 5) << std::endl;
  return 0;
}
