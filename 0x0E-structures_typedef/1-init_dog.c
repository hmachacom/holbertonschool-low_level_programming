#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog-inicializar una estructura
 *@name:-nombre
 *@age:-edad
 *@owner:-Dueño
 *@d:new type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
