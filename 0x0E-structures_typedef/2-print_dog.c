#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to type struct dog var
 */
void print_dog(struct dog *d)
{
	if (d == NUll)
		return;
	/* Set value of member name to string "(nil)" */
	if (d->name == NULL)
		d->name = "(nil)";
	/* Set value of member owner to string "(nil)" */
	if (d->owner == NULL)
		d->owner = "(nil)";
	/* Member age isn't assigned nil cause it's an int */

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
