#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9
 * except for 2 & 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 2 || i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
