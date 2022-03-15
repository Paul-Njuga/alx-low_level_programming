#include <stdio.h>

/**
 * main - Loop through alphabet
 * except for 'e' & 'q'
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
                        putchar(ch);
		}
		ch++;
	}
	putchar('\n');
}
