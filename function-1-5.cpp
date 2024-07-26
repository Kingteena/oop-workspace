int count_evens(int number) {
  int count = 0;
  for (int i = 2; i <= number; i = i + 2) {
    count++;
  }
  return count;
}