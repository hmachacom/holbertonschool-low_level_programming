#ifndef DOG_H
#define DOG_H
/**
 *struct dog-structura
 *@name:-nombre
 *@age:-edad
 *@owner:-Dueño
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *struct dog-new structura
 *@name:-nombre
 *@age:-edad
 *@owner:-Dueño
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
