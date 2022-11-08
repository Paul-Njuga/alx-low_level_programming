#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int n;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

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
			printf("Error\n", argv[i]);
			return (1);
		}
	}
}
