#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array,
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	left = 0;
	right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		/* Check if value is present at mid */
		if (array[mid] == value)
			return (mid);
		/* If value is greater, ignore left half */
		else if (value > array[mid])
			left = mid + 1;
		/* If value is smaller, ignore right half */
		else
			right = mid - 1;
	}
	return (-1);
}
