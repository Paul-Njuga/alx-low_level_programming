#ifndef SRCH_ALG_H
#define SRCH_ALG_H
#include <stdio.h>
#include<math.h>

/* Function Defs */
void _putstr(const char *str);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SRCH_ALG_H */
