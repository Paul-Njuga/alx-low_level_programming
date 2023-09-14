#ifndef SRCH_ALG_H
#define SRCH_ALG_H
#include <stdio.h>
#include<math.h>

/* Function Defs */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_recursive(int *array, size_t low, size_t high, int value);

#endif /* SRCH_ALG_H */
