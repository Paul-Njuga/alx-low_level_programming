#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins,
 * to make change for an amount of money
 */
unsigned int main (int argc, char *argv[])
{
	unsigned int i, n, rnd, rem, change;
	if (agrc == 1 && argv[0] == "./change")
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] < 0)
	{
		printf("0\n");
	}
	else
	{
		n = atoi(argv[1]);
		if (n)
		{
			cents[5] = {25, 10, 5, 2, 1};
			for (i = 0; rem > 0; i++)
			{
				rnd = n / cents[i];
				change += rnd;
				rem = n % cents[i];
				n = rem;
			}
		}
	}
	return (change);
}
