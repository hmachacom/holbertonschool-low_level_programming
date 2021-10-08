#include "main.h"
/**
* print_line:-imprimir ("_") n veces;
*@n:-dato de entrada
* Return: Always 0.
*/
void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar(95);
			c++;
		}
	}
	_putchar('\n');
}
