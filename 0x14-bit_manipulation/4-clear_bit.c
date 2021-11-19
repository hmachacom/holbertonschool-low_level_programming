#include "main.h"
/**
 *clear_bit:-Write a function that sets the value of a bit to 0 a given index
 *@n: decimal
 *@index:indice
 * Return: decim
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
		*n = *n & (~(1 << index));
	return (1);
}
