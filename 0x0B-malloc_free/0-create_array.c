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
	unsigned int i;
	char *p;
	p = malloc(sizeof(*p) * size);

	if (size == 0 || p == NULL)
		return (0);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
