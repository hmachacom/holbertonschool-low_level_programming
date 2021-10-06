#include "main.h"
#include <stdlib.h>
/**
*print_last_digit:-function that prints the last digit of a number.
*@n:-number
* Return: zero ok
*/
int print_last_digit(int n)
{
	if (abs(n) != 0)
	{
		_putchar (abs(n) % 10 + '0');
		return (abs(n) % 10);
	}
	else
	{
		_putchar (n % 10 + '0');
		return (abs(n));
	}
}
