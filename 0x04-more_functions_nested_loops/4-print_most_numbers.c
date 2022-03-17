#include "main.h"

/**
 * print_most_numbers - Print 0 to 10 using _putchar
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		while (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
