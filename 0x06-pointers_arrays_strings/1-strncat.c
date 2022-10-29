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
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, den;

	den = _strlen(dest);

	/**
	 * copy of src[i] comes after den,
	 */
	for (i = 0; (i < n && src[i] != '\0'); i++)
		dest[den + i] = src[i];

	return (dest);
}
