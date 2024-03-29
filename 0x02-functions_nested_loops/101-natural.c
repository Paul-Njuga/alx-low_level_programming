#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
