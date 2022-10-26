#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: pointer to char(s)
 */
void print_rev(char *s)
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
		_putchar(*(s + i));
	_putchar('\n');
}
