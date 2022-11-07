#include "main.h"

/**
* _strlen - returns the length of a string
*@s: poiter of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * _strcat - concatenates two strings
 * @dest: string to dest
 * @src: string origin
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, den, sen;

	den = _strlen(dest);
	sen = _strlen(src);

	/**
	 * copy of src[i] comes after den,
	 */
	for (i = 0; i < sen; i++)
		dest[den + i] = src[i];

	return (dest);
}
