#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to calculate
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 *  Return: pointer to the duplicated string (success),
 *  NULL if insufficient memory (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size;

	/* Account for '\0' */
	size = _strlen(str) + 1;

	dup = malloc(sizeof(*dup) * size);

	if (dup / (sizeof(*dup) < size)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		dup[i] = str[i];
	return (dup);
}
