#include <stdio.h>

/**
 * main - prints the no. of args,
 * followed by a new line
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always argv count or NULL otherwise
 */
int main(int argc __attribute__((unused), char *argv[] __attribute__((unused))
{
	if (argc < 1)
		return;
	return printf("%d\n", argc - 1);
}
