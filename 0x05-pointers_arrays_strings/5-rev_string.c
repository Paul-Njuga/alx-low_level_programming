#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char(s)
 */
void rev_string(char *s)
{
	int i, len;
	char *start, *end, tmp;

	/* Initialize index */
	i = 0;

	/* Get length of the string */
	while (*(s + i) != '\0')
		i++;
	len = i;

	/* Set start & end initially to start of string */
	start = s;
	end = s;

	/* Move i to last character */
	for (i = 0; i < len - 1; i++)
		end++;

	/* Swap the values in start and end pointer */
	for (i = 0; i < len / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		/* Update pointer positions */
		start++;
		end--;
	}
}
