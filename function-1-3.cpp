#include <iostream>

using namespace std;

void count_digits(int array[4][4]) {
  int count_array[10] = {0};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      count_array[array[i][j]]++;
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << i << ":" << count_array[i] << ";";
  }

  cout << endl;
}