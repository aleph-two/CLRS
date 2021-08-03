#include "algorithms.h"

int *merge(int *a, int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int *left = malloc((n1 + 1) * sizeof(int));
  int i;
  for (i = 0; i < n1; i++) {
    left[i] = a[p + i];
  }
  left[i] = INT_MAX;

  int *right = malloc((n2 + 1) * sizeof(int));
  int j;
  for (j = 0; j < n2; j++) {
    right[j] = a[q + j + 1];
  }
  right[j] = INT_MAX;

  i = 0;
  j = 0;
  for (int k = p; k <= r; k++) {
    if (left[i] <= right[j]) {
      a[k] = left[i];
      i += 1;
    } else {
      a[k] = right[j];
      j += 1;
    }
  }

  free(left);
  free(right);

  return a;
}

int *merge_sort_rec(int *a, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort_rec(a, p, q);
    merge_sort_rec(a, q + 1, r);
    return merge(a, p, q, r);
  }
  return a;
}

int *merge_sort(int *a, int size) { return merge_sort_rec(a, 0, size - 1); }
