#include <stdlib.h>

int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int median_array(int array[], int n) {
  if (n < 1 || n % 2 == 0) {
    return false;
  }
  qsort(array, n, sizeof(int), compare);

  return array[n / 2];
}
