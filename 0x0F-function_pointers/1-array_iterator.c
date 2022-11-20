#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function,
 * given as a parameter on each element of an array
 * @array: item to be initialized
 * @size: size of the array
 * @action: callback function needed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array || !size)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
