#include "dog.h"

/**
 * free_dog - frees dogs (struct dog_t)
 * @d: pointer to type dog_t var
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
