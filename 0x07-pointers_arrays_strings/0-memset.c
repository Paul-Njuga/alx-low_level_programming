#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char memory to fill
 * @b: constant byte to fill
 * @n: bytes to be filled
 *
 * Return: pointer to char memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
