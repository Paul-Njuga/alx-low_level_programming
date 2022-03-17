#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar(92);
		_putchar('\n');
	}

}
