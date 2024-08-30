#include <iostream>
#include <ctime>

class test {
 private:
  int x;

 public:
  test(int x) : x(x) {};
  int getX() { return x; }
  virtual int getY() { return 0 ;};
};

class test2 : public test {
 private:
  int y;

 public:
  test2(int x, int y) : test(x), y(y) {};
  int getY() { return y; }
};

int main() {
  std::time_t x;
  time(&x);

  std::cout << x << std::endl;
}
