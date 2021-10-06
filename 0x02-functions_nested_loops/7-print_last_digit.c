#include "main.h"
#include <stdlib.h>
/**
*print_last_digit:-function that prints the last digit of a number.
*@n:-number
* Return: zero ok
*/
int print_last_digit(int n)
{
	int r;

	n = ((abs(n)) * (-1));
	r = n % 10;
	_putchar (abs(r) + '0');
	return (abs(r));
}
