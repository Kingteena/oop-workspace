#include <iostream>

extern int median_array(int[], int);

int main() {
  int array[5] = {5, 2, 6, 4, 3};
  std::cout << median_array(array, 5) << std::endl;
  return 0;
}
