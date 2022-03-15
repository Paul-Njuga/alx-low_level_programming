#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: character to check
 * Return: 1 if n is > 0 || 0 if == 0 || -1 if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
