#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int i, n3;
	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;
		if (i != 50)
			printf("%d, ", n3);
		else
			printf("%d", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
