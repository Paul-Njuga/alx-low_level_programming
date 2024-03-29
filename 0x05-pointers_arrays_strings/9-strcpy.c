#include "main.h"
/**
* *_strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
*@dest: copy of the string
*@src: origin of the string
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* Value i below is 1 more than inside the for loop */
	dest[i] = '\0';
	return (dest);
}
