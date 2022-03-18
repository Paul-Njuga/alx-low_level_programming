#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Print 0 to 10 using _putchar
 * followed by a new line
 * Return: Always 0 (Success)
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		} else if (i % 5 == 0)
		{
			if (i > 99)
				printf("Buzz");
			else
			{
				printf("Buzz");
				printf(" ");
			}
		} else
		{
			printf("%d", i);
			printf(" ");
		}
	}

	_putchar('\n');
}
