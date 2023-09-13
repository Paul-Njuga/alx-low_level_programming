#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array,
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, end, prev;

	if (!array)
		return (-1);

	step = sqrt(size);
	end = 0;
	prev = 0;

	while (array[end] < value && end <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		/* Store previous jump */
		prev = end;
		/* Not correct block, so shift --> */
		end += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, end);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		++prev;
		if (prev == size)
		/* Value not in array */
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
