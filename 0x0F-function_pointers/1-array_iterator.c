#include "function_pointers.h"
/**
 *array_iterator:-funcion que ejecuta otra funcion en cada elemento del arreglo
 *@array:-array
 *@size:-tamaño del array
 *@action:funcion a llamar
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j;

	j = size;
	if (!array || !size || !action)
		return;
	for (i = 0; i < j; i++)
	{
		(*action)(array[i]);

	}
}
