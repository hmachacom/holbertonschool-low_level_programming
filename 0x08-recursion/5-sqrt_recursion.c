#include "main.h"
#include "main.h"
/**
 * sqrt2:;- retur the raiz cuadrada num
 *@n:num para calcular raiz cuadrada
 *@r:interador
 * Return: factorial de num.
 */
int sqrt2(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (sqrt2(n, r + 1));
}
/**
 * _sqrt_recursion:;- retur the raiz cuadrada num
 *@n:num para calcular raiz cuadrada
 * Return: raiz cuadrada de num.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
