#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse,
 * followed by a new line using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
