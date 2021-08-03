#ifndef HELPER_H
#define HELPER_H

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This function returns an array with random values of the specified size */
int *random_array(int size);

/* This function prints an array to stdout */
void print_array(int *a, int size);

/* This function prints a matrix to stdout */
void print_matrix(int *a, int n, int m);

/* This function print the execution time of a function */
void benchmark(int *(*f)(int *a, int size), int *a, int size);

#endif
