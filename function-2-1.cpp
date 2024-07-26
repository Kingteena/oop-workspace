int min_element(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int smallest = array[0];
  for (int i = 1; i < n; i++) {
    if (smallest > array[i]) {
      smallest = array[i];
    }
  }
  return smallest;
}