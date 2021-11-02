#include "dog.h"
/**
 *lon:-nuevo perro
 *@mall:new type
 *Return:-nuevo
 */
int lon(char *mall)
{
	int c;

	for (c = 0; mall[c] != '\0'; c++)
		;
	return (c);
}
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
	int i;

	nuevo = malloc(sizeof(dog_t));
	if (nuevo == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	namec = malloc(sizeof(char) * lon(name) + 1);
	ownerc = malloc(sizeof(char) * lon(owner) + 1);
	nuevo->name = name;
	nuevo->age = age;
	nuevo->owner = owner;
	for (i = 0; name[i] != '\0'; namec[i] = name[i], i++)
		;
	namec[i] = '\0';
	for (i = 0; owner[i] != '\0'; ownerc[i] = owner[i], i++)
		;
	ownerc[i] = '\0';
	return (nuevo);
}
