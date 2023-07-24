#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory  for a struct dog
 * @d: dog_t to free
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
