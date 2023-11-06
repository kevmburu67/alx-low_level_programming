#include <stdlib.h>
	#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to a struct dog to free
 *
 * This function frees the memory allocated for a struct dog.
 *
 * @d: Pointer to a struct dog to be freed.
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
