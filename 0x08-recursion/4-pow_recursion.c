#include "main.h"
/**
 * _pow_recursion:;- retur the num elevado a la potencia
 *@x:-base
 *@y:-Exponente
 * Return: num elevado.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
