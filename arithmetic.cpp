#include <cmath>
#include <iostream>

using namespace std;

int add(int first, int second) {
  int carry = 0, ans = 0, count = 0, temp;

  while ((first > 0 && second > 0) || carry == 1) {
    temp = (first % 10) + (second % 10) + carry;
    switch (temp) {
      case 3:
        carry = 1;
        ans += 1 * pow(10, count);
        break;
      case 2:
        carry = 1;
        break;
      case 1:
        carry = 0;
        ans += 1 * pow(10, count);
      case 0:
        carry = 0;
    }
    count++;
    first /= 10;
    second /= 10;
  }
  return ans;
}

int shift_left(int binary) { return binary * 10; }

int shift_right(int binary) { return binary / 10; }

int main() {
  int binary1, binary2;
  cin >> binary1;
  cin >> binary2;

  cout << "Addition: " << add(binary1, binary2) << endl;
  cout << "First Binary shift left: " << shift_left(binary1) << endl;
  cout << "Second Binary shift left: " << shift_left(binary2) << endl;
  cout << "First Binary shift right: " << shift_right(binary1) << endl;
  cout << "Second Binary shift right: " << shift_right(binary2) << endl;
}
