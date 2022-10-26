#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: pointer to char(s)
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = 0;

	/* Gets length */
	while (*(str + len) != '\0')
		len++;

	/* Get mid of legnth */
	if (len % 2 != 0)
		mid = (len) / 2;
	else
		mid = (len - 1) / 2;

	for (i = mid; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
