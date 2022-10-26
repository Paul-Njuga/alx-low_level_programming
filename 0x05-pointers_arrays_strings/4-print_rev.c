#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: pointer to char(s)
 */
void print_rev(char *s)
{
	char *begin, *end, temp;
	int i, len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}

	begin = s;
	end = s;

	for (i = 0; i < (len - 1); i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
	_putchar('\n');
}
