int *insertion_sort(int *a, int size) {
  for (int j = 1; j < size; j++) {
    int i = j - 1;
    while (i >= 0 && a[i] > a[j]) {
      a[i + 1] = a[i];
      i -= 1;
    }
    a[i + 1] = a[j];
  }
  return a;
}
