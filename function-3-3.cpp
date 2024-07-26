#include <iostream>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int current, frequency;
  double weighted_avg = 0;
  for (int i = 0; i < n; i++) {
    current = array[i];
    frequency = 0;
    for (int j = 0; j < n; j++) {
      if (current == array[j]) {
        frequency++;
      }
    }
    weighted_avg += double(current * frequency) / n;
  }
  return weighted_avg;
}