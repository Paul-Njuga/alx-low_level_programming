#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to char(s)
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy of the string
 * @src: origin of the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i]
	dest[i] = '\0'
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 *
 * Return: pointer to new dog var (Success),
 * NULL (Otherwise)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lnm, lown;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Get length of name and owner */
	lnm = _strlen(name);
	lown = _strlen(owner);

	/* malloc mem using lnm */
	d->name = malloc(sizeof(char) * (lnm + 1));
	/* Free everything if malloc fails */
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* malloc mem using lown */
	d->owner = malloc(sizeof(char) * (lown + 1));
	/* Free everything if malloc fails */
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}

	/* Copy src string to dest */
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
