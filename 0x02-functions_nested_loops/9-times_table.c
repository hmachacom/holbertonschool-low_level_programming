#include "main.h"
/**
*times_table:-print table multiplicar
*
* Return: zero ok
*/
void times_table(void)
{
int a, b = 0, i = 0, c = 9;

while (b <= c)
{
	a = 0, i = 0;
	while (i < c)
	{
		if (a < 10)
		{
		_putchar(((a) % 10) + '0');
		_putchar(',');
		_putchar(' ');
		 _putchar(' ');
		}

		else
		{
		 _putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(',');
		_putchar(' ');
		}
		a = a + b;
		i++;
	}
	if (a < 10)
	{
	_putchar((a % 10) + '0');
	_putchar('$');
	_putchar('\n');
	}
	else
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	_putchar('$');
	_putchar('\n');
	}
	b++;
}
}
