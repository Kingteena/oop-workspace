extern int *readNumbers();
extern bool equalsArray(int *, int *, int);
extern int *reverseArray(int *, int);

#include <iostream>

int main() {
  int *numbers1 = readNumbers();
  int *numbers2 = reverseArray(numbers1, 10);
  bool condition = equalsArray(numbers1, numbers2, 10);
  if (condition) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
  delete numbers1;
  delete numbers2;
  
  return 0;
}