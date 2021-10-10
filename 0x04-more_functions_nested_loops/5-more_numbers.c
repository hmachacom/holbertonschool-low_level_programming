#include "main.h"
/**
* more_numbers:-Imprime los numero de 0 al 14 y 14 veces
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int n, c = 0;

	while (c <= 9)
	{
		n = 0;
				while (n <= 14)
			{
				if (n > 9)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
			n++;
			}
		c++;
		_putchar('\n');
	}
}
