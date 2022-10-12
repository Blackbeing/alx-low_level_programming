#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free allocated dog struct memory
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->name)
			free(d->owner);
		free(d);
	}

}
