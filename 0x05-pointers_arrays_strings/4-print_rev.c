#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: pointer to char(s)
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; 1 >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
