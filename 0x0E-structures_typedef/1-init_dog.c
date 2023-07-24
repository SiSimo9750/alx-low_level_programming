#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this it will initialize astruct dog variable
 * @d: pointer to the variable to initilize
 * @name: initilized name
 * @age: initialized age
 * @owner: initilized owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
