#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: char to locate
 *
 * Return: pointer to the first occurrence of the character c,
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	/* (s[i] >= '\0') - Iterate through whole string including '\0' */
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	/* Else return NULL */
	return ('\0');
}
