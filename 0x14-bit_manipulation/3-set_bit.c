#include "main.h"
/**
 *set_bit:-Write a function that sets the value of a bit to 1 at a given index.
 *@n: decimal
 *@index:indice
 * Return: decim
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
