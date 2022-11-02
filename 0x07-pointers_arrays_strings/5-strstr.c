#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: string to scan
 * @needle: string containing the character to match
 *
 * Return: pointer to the beginning of the located substring,
 * matching one of the bytes in needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
				return (needle + i);
		}
	}
	return ('\0');
}
