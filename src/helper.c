#include "helper.h"

int *randomize(int *A, int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    A[i] = rand() % 10;
  }
  return A;
}

int *random_array(int size) {
  return randomize(malloc(size * sizeof(int)), size);
}

void print_array(int *A, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d", A[i]);
    if (i + 1 < size) {
      printf(" ");
    } else {
      printf("\n");
    }
  }
}

void print_matrix(int *A, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", A[i * n + j]);
      if (j + 1 < m) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }
}

void benchmark(int *(*f)(int *, int), int *A, int size) {
  clock_t start, end;
  start = clock();
  f(A, size);
  end = clock();
  float time = (end - start) / (float)(CLOCKS_PER_SEC);
  setlocale(LC_NUMERIC, "");
  printf("input: %'d runtime: %.6fs\n", size, time);
}
