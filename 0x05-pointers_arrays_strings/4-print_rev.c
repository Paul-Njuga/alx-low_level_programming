#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: pointer to char(s)
 */
void print_rev(char *s)
{
	char *begin, *end, tmp;
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
		tmp = *end;
		*end = *begin;
		*begin = tmp;

		begin++;
		end--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
