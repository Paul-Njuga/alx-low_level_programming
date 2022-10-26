#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @str: pointer to char(s)
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar((s[i]));
	_putchar('\n');
}
