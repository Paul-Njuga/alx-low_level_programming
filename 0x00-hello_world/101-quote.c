#include <stdio.h>

/**
 * main - prints to stderr
 *
 * Return: 1 (Unsuccessful)
 */
int main(void)
{
	fprintf(stderr, "%s", "and that piece of art is useful");
	fprintf(stderr, "%s", "\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
