#include "search_algos.h"

/**
  * binary_recursive - Searches for a value in a sorted array,
  * of integers using advanced binary search
  *
  * @array: A pointer to the first element of the [sub]array to search
  * @low: The starting index of the [sub]array to search
  * @high: The ending index of the [sub]array to search
  * @value: The value to search for
  *
  * Return: The first index where the value is located.
  *         Else, -1 if the value is not present.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (high > low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = low + (high - low) / 2;

		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);

		if (array[mid] >= value)
			return (binary_recursive(array, low, mid, value));
		return (binary_recursive(array, mid + 1, high, value));
	}
	return (-1);
}

/**
  * advanced_binary - Searches for a value in a sorted array,
  * of integers using advanced binary search
  *
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: The first index where the value is located.
  *         Else, -1 if the value is not present or the array is NULL.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
