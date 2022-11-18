#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a
 * function given as a parameter on each element of an array.
 * @array: item to be initialized
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (!action || !array)
	{
		return;
	}

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
