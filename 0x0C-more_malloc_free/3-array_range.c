#include "main.h"

/**
 * array_range:- funcion que crea una matrix desde min hasta max
 *@min:-valor minimo de la matriz
 *@max:-valor maximo de la matriz
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *matrix, i;

	if (min > max)
		return (NULL);
	matrix = malloc(sizeof(int) * ((max - min) + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		*(matrix + i) = min + i;
	}
	return (matrix);
}
