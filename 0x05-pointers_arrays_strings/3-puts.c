#include "main.h"

/**
 * _puts - returns the length of a string
 * @str: pointer to char(s)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar((*str));
		str++;
	}
	_putchar('\n');
}
