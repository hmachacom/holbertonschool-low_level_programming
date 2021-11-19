#include "main.h"
/**
 *get_bit:-imprimer el dinario del indice solicitado
 *@n: decimal
 *@index:indice
 * Return: decim
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int n2 = n;

	for (i = 0; i < index ; i++)
	{
		n2 = (n2 >> 1);
		if (!n2)
			return (-1);
	}
	return ((n >> i) & 1);
}
