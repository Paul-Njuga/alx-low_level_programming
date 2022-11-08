#include <stdio.h>
/**
 * main - prints its name,
 * followed by a new line
 * @argc: argument count
 * @argv: string of pointers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		argv[0] = argv[4];
		print("%s\n", argv[0];
	}
	return (0);
}
