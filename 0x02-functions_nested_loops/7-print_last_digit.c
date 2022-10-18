#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: number
 *
 * Return: i
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
		a = -a;
	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar (a + '0');
	return (b);
}
