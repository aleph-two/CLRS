#include <stdio.h>
#include <stdlib.h>

#include "helper.h"
#include "sorting/algorithms.h"

int main(int argc, char const *argv[]) {
  int size = 100000;
  int *a;

  a = random_array(size);
  printf("insertion sort: ");
  benchmark(insertion_sort, a, size);
  free(a);

  a = random_array(size);
  printf("merge sort:     ");
  benchmark(merge_sort, a, size);
  free(a);

  return 0;
}
