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

	/**
	 * dest len (den)
	 * i + 1 includes '\0' thus,
	 * special char ' ',
	 * is handled
	 */
	den = _strlen(dest) + 1;

	/** 
	 * src len (sen)
	 * i + 1 includes '\0' thus,
	 * special char '\n',
	 * is handled
	 */
	sen = _strlen(src) + 1;

	/**
	 * copy of src[i] comes after den,
	 * i <= sen includes '\0'
	 */
	for (i = 0; i <= sen; i++)
		dest[den + i] = src[i];

	return (dest);
}
