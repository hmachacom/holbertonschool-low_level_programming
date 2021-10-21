#include "main.h"
/**
 * factorial:;- retur the factrial num
 *@n:num para calcular factorial
 * Return: factorial de num.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
