#include "helper.h"

int *randomize(int *a, int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    a[i] = rand() % 10;
  }
  return a;
}

int *random_array(int size) {
  return randomize(malloc(size * sizeof(int)), size);
}

void print_array(int *a, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d", a[i]);
    if (i + 1 < size) {
      printf(" ");
    } else {
      printf("\n");
    }
  }
}

void print_matrix(int *a, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", a[i * n + j]);
      if (j + 1 < m) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }
}

void benchmark(int *(*f)(int *a, int size), int *a, int size) {
  clock_t start, end;
  start = clock();
  f(a, size);
  end = clock();
  float time = (end - start) / (float)(CLOCKS_PER_SEC);
  setlocale(LC_NUMERIC, "");
  printf("input: %'d runtime: %.6fs\n", size, time);
}
