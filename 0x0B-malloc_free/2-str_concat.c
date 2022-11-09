#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to char(s)
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: pointer to concatenated string (Success),
 * NULL (Fail)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, sum, sz1, sz2;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2) + 1;

	if (s1 == NULL)
		sz1 = 0;
	else if (s2 == NULL)
		sz1 += 1;

	sum = sz1 + sz2;
	p = malloc(sizeof(*p) * sum);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= sz1; i++)
		p[i] = s1[i];
	for (; i <= sum; i++)
		p[i] = s2[i];

	return (p);
}
