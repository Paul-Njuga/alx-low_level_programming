#include <stdio.h>

/**
 * main - Prints prints all single digit numbers of base 16
 * starting from 0, followed by a new line using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 16; d++)
		printf("%x", d);
	printf("\n");
	return (0);
}
