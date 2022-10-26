#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st int to be swapped
 * @b: 2nd int to be swapped
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	tmp = a;
	*a = *b;
	*b = *tmp;
}
