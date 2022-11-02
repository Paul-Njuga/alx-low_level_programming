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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
