#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins,
 * to make change for an amount of money
 * @argc: arg count
 * @argv: pointer to array of arg
 *
 * Return: number of cents
 */
int main(int argc, char *argv[])
{
	int i, n, rnd, rem, change = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins[5] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5 && rem >= 0; i++)
		{
			while (rem >= coins[i])
			{
				rnd = n / coins[i];
				change += rnd;
				rem = n % coins[i];
				n = rem;
				/**
				 * (Improved version)
				 * change++
				 * n -= coins[i]
				 */
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
