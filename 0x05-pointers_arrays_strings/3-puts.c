#include "main.h"

/**
 * _puts - returns the length of a string
 * @str: pointer to char(s)
 */
int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar((*str));
		str++;
	}
	_putchar('\n');
}
