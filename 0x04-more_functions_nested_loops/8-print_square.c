#include "main.h"
/**
*print_square(int n):-imprimir ("_") n veces;
*@size:-dato de entrada
* Return: Always 0.
*/
void print_square(int size)
{
	int i, c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
