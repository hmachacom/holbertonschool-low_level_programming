#include "main.h"
#include "main.h"
/**
 * factorial:;- retur the factrial num
 *@n:num para calcular factorial
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
 * factorial:;- retur the factrial num
 *@n:num para calcular factorial
 * Return: factorial de num.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
