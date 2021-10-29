#include "main.h"

/**
 * _calloc:- reserva espacion en memoria dinamica
 *@nmemb:-n nytes a reservar
 *@size:-tamaño de la matriz
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	return (b);
}
