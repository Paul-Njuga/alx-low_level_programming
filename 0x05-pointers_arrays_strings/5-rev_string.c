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

	while (*(s + i) != '\0')
		i++;
	len = i;

	start = s;
	end = s;

	/* Move i to last character */
	for (i = 0; i < len - 1; i++)
		end++;

	/* Start moving backwards from current index i */
	for (c = 0; c < len / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		start++;
		end--;
	}
}
