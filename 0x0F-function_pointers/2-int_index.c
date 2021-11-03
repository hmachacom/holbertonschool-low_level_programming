#include "function_pointers.h"
/**
 *int_index:-funcion que ejecuta otra funcion en cada elemento del arreglo
 *@array:-array
 *@size:-tamaño del array
 *@cmp:funcion a llamar
 *Return:- el indici del array si conincide -1 en caso de error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);
		if (j != 0)
			break;
		if (i == size - 1)
			return (-1);
	}

	return (i);
}
