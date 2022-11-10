#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int n;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (n)
		{
			sum += n;
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
