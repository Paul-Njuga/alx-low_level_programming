#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success) or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mul += argv[1] * argv[2];
		printf("%d\n", mul);
		return (0);
	}
}
