#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory alocated for a structt dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		FREE (d->name);
		free(d->owner);
		free(d);
		d = NULL;
	}
}
