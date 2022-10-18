#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: number
 *
 * Return: i
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -i;
		i = i % 10;
		i = -i;
		i = _putchar(i + '0');
		return (i);
	}
	else
	{
		i = i % 10;
		i = _putchar(i + '0');
		return (i);
	}
}
