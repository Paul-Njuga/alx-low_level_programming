#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to char(s)
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	
	while (*s != '\0')
	{
		len += 1;
		s++;
	}

	return len;
}
