#include <stdio.h>

/**
 * main - Prints prints all single digit numbers of base 10
 * starting from 0, followed by a new line using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
