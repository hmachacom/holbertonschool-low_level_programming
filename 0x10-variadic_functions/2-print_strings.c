#include "variadic_functions.h"
/**
 *print_strings:-funcion que imprime n de cadenas separados por un caracter
 *@n: lon array
 *@...:parametros
 *@separator:-caracter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list iter;
	unsigned int h, k;

	va_start(iter, n);
	for (h = 0; h < n; h++)
	{
		printf("%s", va_arg(iter, char *));
		if (h < n - 1)
		{
			if (separator != NULL)
			{
				for (k = 0; separator[k]; k++)
				{
					printf("%c", *(separator + k));
				}
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
}
