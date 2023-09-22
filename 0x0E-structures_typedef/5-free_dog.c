#include "dog.h"

/**
 * free_dog - func that make the obj free
 * @d: new obj
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
