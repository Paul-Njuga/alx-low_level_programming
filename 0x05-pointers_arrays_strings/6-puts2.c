#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: pointer to char(s)
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	/* Gets length */
	while (*(str + len) != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
