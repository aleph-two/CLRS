#ifndef AUX_H
#define AUX_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This function initializes an array with random integers between 0 and 9 */
int *randomize(int *A, int size);

/* This function prints an array to stdout */
void print_array(int *A, int size);

/* This function prints a matrix to stdout */
void print_matrix(int *A, int n, int m);

#endif
