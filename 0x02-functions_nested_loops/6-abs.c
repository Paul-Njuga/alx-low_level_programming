#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * 
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	} else if (n < 0)
	{
		n = n * (-1);
		_putchar(n);
	}
	return (0);
}
