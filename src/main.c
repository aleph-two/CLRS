#include <stdio.h>
#include <stdlib.h>

#include "aux.h"
#include "sorting/insertion_sort.h"

int main(int argc, char const *argv[]) {
  int size = 40;
  int *A = malloc(size * sizeof(int));
  print_array(A, size);

  A = randomize(A, size);
  print_array(A, size);

  A = insertion_sort(A, size);
  print_array(A, size);

  return 0;
}
