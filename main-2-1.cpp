extern int *readNumbers();
extern void hexDigits(int *, int);

int main() {
  int *numbers = readNumbers();
  hexDigits(numbers, 10);
  delete numbers;
  return 0;
}