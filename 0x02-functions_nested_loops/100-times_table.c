#include "main.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0
 * @n: number to print tt n times
 */
void print_times_table(int n)
{
	int i, j, m;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + 48);
					_putchar(((m / 10) % 10) + 48);
					_putchar((m % 10) + 48);
				} else if (m >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				} else if (m < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + 48);
				} else if (j == 0)
				{
					_putchar(m + 48);
				}
			}
			_putchar('\n');
		}
	}
}
