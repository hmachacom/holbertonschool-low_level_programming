#include "main.h"
/**
 *print_binary:-imprimer un decinal en binario
 *@n: decimal
 * Return: decim
 */
void print_binary(unsigned long int n)
{
	int i, u;
	unsigned long int n2 = n;

	for (i = 0; n2 > 1; i++)
		n2 = (n2 >> 1);
	for (u = 0; i >= 0; u++)
	{
		_putchar(((n >> i) & 1) + '0');
		i--;
	}
}
