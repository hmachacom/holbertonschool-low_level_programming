#include "main.h"
/**
*print_diagonal(int n):-imprimir ("_") n veces;
*@n:-dato de entrada
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar(92);
			c++;
		}
	}
	_putchar('\n');
}
