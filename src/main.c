#include <stdio.h>
#include <stdlib.h>

#include "helper.h"
#include "sorting/algorithms.h"

int main(int argc, char const *argv[]) {
  int size = 100000;
  int *A = random_array(size);

  printf("insertion sort: ");
  benchmark(insertion_sort, A, size);

  return 0;
}
