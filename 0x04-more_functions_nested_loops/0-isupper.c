#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character checked
 *
 * Return: 1 (Success), 0 (Otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
