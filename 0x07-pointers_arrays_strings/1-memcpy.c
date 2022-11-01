#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to char memory to paste
 * @src: pointer to char source memory
 * @n: bytes to fill
 *
 * Return: pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
