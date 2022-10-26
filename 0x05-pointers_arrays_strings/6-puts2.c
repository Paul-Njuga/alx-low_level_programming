#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: pointer to char(s)
 */
void puts2(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		while (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		i++;
	}
	_putchar('\n');
}
