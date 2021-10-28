#include "main.h"

/**
 * malloc_checked:- reserva espacion en memoria dinamica
 * @b:catidad de memoria a reservar
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b + 1);

	if (c == NULL)
		exit(98);
	return (c);
}
