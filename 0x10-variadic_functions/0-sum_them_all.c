#include "variadic_functions.h"
/**
 *sum_them_all:-funcion que suma n numero de parametros
 *@n: lon array
 *@...:parametros
 * Return: Always 0s
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list iter;
	unsigned int i, add = 0;

	va_start(iter, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(iter, int);
	}
	va_end(iter);
	return (add);
}
