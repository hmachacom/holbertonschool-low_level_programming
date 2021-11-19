#include "main.h"
/**
 *get_bit:-imprimer el dinario del indice solicitado
 *@n: decimal
 *@index:indice
 * Return: decim
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
