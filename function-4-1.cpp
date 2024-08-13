#include <iostream>

using namespace std;

int *readNumbers() {
  int *array = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }
  return array;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << numbers[i] << endl;
  }
}

int secondSmallestSum(int *numbers,int length){
    int sum1 = numbers[0] *10, sum2 = numbers[0] * 10, temp = 0;
   for (int i = 0; i < length; i++) {
    for (int j = length; j > i; j--) {
        temp = 0;
        for(int k = i; k < j; k++) {
            temp += numbers[k];
        }
        if (temp < sum1){
            sum2 = sum1;
            sum1 = temp;
        }else if ((temp > sum1) & (temp < sum2)){
            sum2 = temp;
        }
  }
  } 
  return sum2;
}