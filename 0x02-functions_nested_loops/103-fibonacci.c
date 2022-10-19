#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i, n1, n2, n3;

	n1 = 1;

	n2 = 2;

	for (i = 1; i <= 4000000; i++)
	{
		long int sum;

		if (n1 % 2 == 0)
		{
			sum += n1;
			printf("%ld", sum);
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
