#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer to array
 * @n: no. of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
		else if (i < n)
			printf("");
	}
	printf("\n");
}
