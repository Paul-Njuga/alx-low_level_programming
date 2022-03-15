#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Insert stdio.h for output */

/**
 * main - Check if a is 0, <, > 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* If else statement */
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a < 6 && a != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	return (0);
}
