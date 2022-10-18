#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: number
 *
 * Return: i
 */
int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		i = -i;
		l = i % 10;
		l = -l;
		l = _putchar(l + '0');
		return (l);
	}
	else
	{
		l = i % 10;
		l = _putchar(l + '0');
		return (l);
	}
}
