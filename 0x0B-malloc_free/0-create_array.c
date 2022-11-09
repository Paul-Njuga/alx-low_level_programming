#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size to allocate
 * @c: char to initialize
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return;

	create_array = malloc(sizeof(c) * size);
	create_array[0] = c;
	free(create_array);
}
