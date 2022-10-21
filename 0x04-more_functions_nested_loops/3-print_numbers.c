#include "main.h"
/**
 * print_alphabet - prints the numbers,
 * from 0 to 9
 * followed by a new line
 */
void print_alphabet(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
