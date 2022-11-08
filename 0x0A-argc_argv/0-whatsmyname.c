#include <stdio.h>
/**
 * main - prints its name,
 * followed by a new line
 * @argc: argument count
 * @argv: double pointer to char
 *
 * Return: 0 (Always Success)
 */
int main(int argc, char **argv)
{
	if (argv[0] == 'mv' && argc == 3)
		argv[0] = argv[2];
	printf("%d/n", argv[0]);
	return (0);
}
