#include "main.h"

/**
 * print_alphabet_x10 - Loop through alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
	}
}
