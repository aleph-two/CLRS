int *insertion_sort(int *a, int size) {
  int key, i;
  for (int j = 1; j < size; j++) {
    key = a[j];
    // insert a[j] into the sorted sequence a[0 .. j - 1]
    i = j - 1;
    while (i >= 0 && a[i] > key) {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = key;
  }
  return a;
}
