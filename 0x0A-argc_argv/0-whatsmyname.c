#include <stdio.h>

/**
 * main - prints the name of the program,
 * followed by a new line
 * @argc: argument count
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (Success)
 */
/* __attribute__((unused)) only suppresses compiler unused var warning */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
