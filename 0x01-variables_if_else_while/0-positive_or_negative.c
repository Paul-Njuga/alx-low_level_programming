#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if number is <0, ==0, >0
 * @n - Number to be checked
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive", n);
	}
	else if (n == 0)
 18     {
 19             printf("%d is zero", n);
 20     }
	else (n < 0)
 18     {
 19             printf("%d is negative", n);
 20     }
	return (0);
}
