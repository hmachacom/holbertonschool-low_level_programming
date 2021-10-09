#include "main.h"
/**
*print_square(int n):-imprimir ("_") n veces;
*@size:-dato de entrada
* Return: Always 0.
*/
void print_square(int size)
{
if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar(92);
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
