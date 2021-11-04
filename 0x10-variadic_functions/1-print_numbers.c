#include "variadic_functions.h"
/**
 *print_numbers:-funcion que imprime n numeros separados por un caracter
 *@n: lon array
 *@...:parametros
 *@separator:-caracter
 * Return: Always 0s
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(iter);
	unsigned int i, j;

	va_start(iter, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(iter, int));
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				for (j = 0; separator[j]; j++)
				{
					printf("%c", *(separator + j));
				}
			}
		}
	}
	printf("\n");
}
