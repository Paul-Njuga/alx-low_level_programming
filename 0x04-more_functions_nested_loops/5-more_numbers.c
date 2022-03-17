#include "main.h"

/**
 * more_numbers - Print 0 to 14, 10 times using _putchar
 * followed by a new line
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}

		_putchr('\n');
	}
}
