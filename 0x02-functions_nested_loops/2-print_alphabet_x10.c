#include "main.h"

/**
 * print_alphabet - Loop through alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for(i = 0; i < 10; i++)
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
