#include "main.h"

/**
 * print_last_digit - Prints the last digit of a no.
 * @n: int to check
 * Return: Last digit of a no.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
