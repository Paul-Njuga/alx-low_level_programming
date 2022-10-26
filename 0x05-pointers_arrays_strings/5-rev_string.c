#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char(s)
 */
void rev_string(char *s)
{
	int i;

	/* Initialize index */
	i = 0;
	/* Move i to last character */
	while (*(s + i) != '\0')
		i++;
	i--;
	/* Start moving backwards from current index i */
	for (; i >= 0; i--)
		s = (*(s + i));
}
