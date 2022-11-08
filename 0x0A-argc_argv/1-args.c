#include <stdio.h>

/**
 * main - prints the no. of args,
 * followed by a new line
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
