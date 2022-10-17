#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d == '9')
		{
			putchar(d);
		}
		else
		{
			putchar(d);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
