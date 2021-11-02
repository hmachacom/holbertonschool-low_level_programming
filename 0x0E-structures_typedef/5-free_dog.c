#include "dog.h"
/**
 *free_dog:-nuevo perro
 *@d:free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name), free(d->owner), free(d);
	}
}
