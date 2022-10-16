#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except for 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		while (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
