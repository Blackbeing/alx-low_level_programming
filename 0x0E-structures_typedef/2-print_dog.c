#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print dog struct
 * @d: Pointer to dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name != NULL ? d->name : "(nil)",
				d->age,
				d->owner != NULL ? d->owner : "(nil)");
	}
}
