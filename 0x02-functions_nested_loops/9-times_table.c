#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m/10) + 48);
				_putchar((m%10) + 48);
			}
			else if (m < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + 48);
			}
			else if (j == 0)
			{
				_putchar(m + 48);
			}
		}
		_putchar('\n');
	}
}
