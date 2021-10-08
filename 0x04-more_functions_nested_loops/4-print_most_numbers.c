#include "main.h"
/**
* print_most_numbers:-Imprime los numero de 0 al 9 con excp de 2 y 4
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if ((n != 50) && (n != 52))
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
