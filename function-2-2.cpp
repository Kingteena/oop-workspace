int max_element(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int largest = array[0];
  for (int i = 1; i < n; i++) {
    if (largest < array[i]) {
      largest = array[i];
    }
  }
  return largest;
}