#include <iostream>

extern double sum_even(double[], int);

int main(){
  double array[5] = {5.5, 4.3, 3.5, 4.2, 5.5};
  std::cout << sum_even(array, 5) << std::endl;
  return 0;
}