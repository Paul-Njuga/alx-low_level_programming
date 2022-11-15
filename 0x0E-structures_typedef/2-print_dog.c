#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to type struct dog var
 */
void print_dog(struct dog *d)
{
	if (d == NUll)
		return;
	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	(d->age == NULL) ? printf("Age: (nil)\n") : printf("Age: %d\n", d->age);
	(d->owner == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->owner);
}
