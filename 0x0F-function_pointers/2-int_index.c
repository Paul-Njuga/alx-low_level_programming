#include "function_pointers.h"

/**
 * int_index - returns the index of the first element,
 * for which the cmp function does not return 0
 * @array: array to be initialized
 * @size: size of the array
 * @cmp: callback function used to compare values
 *
 * Return: index of the first element for which,
 * the cmp function does not return 0 (Success),
 * -1 if no match is found or size is negative (Failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
