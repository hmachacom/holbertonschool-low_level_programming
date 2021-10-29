#include "main.h"

/**
 * _calloc:- reserva espacion en memoria dinamica
 *@nmemb:-n nytes a reservar
 *@size:-tamaño de la matriz
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	b = malloc(nmemb);
	if (b == NULL)
		return (NULL);
	for ( i = 0; i < size ; i++)
	{
		*(b + i) = 0;
	}
	
	return (b);
}
