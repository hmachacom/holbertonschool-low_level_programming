#include "dog.h"
/**
 *new_dog:-nuevo perro
 *@name:new type
 *@age:age
 *@owner:owner
 *Return:-nuevo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo;
	char *namec, *ownerc;

	nuevo = malloc(sizeof(dog_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->name = name;
	nuevo->age = age;
	nuevo->owner = owner;
	namec = name;
	ownerc = owner;
	return (nuevo);
}
