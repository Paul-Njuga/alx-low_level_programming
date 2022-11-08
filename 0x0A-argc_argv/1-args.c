#include <stdio.h>

/**
 * main - prints the no. of args,
 * followed by a new line
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always argv count or NULL otherwise
 */
int main(int argc, char *argv[] __attribute__((unused))
{
	printf("%d\n", argc - 1);
	return (0);
}
