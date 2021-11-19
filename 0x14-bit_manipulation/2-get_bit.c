#include "main.h"
/**
 *get_bit:-imprimer el dinario del indice solicitado
 *@n: decimal
 *@index:indice
 * Return: decim
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, u;
	unsigned long int n2 = n;

	for (i = 0; n2 > 1; i++)
		n2 = (n2 >> 1);
	for (u = 0; u < index; u++)
		;
	if (index > i)
		return (-1);
	return ((n >> u) & 1);
}
