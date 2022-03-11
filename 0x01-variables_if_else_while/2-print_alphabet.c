#include <stdio.h>
#include <ctype.h>

/**
 * main - Loop through alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	putchar('\n');
	return (0);
}
