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
	char *g;

	va_start(iter, n);
	for (h = 0; h < n; h++)
	{
		g = va_arg(iter, char*);
		if (g == NULL)
		{
			g = "(nil)";
		}

		printf("%s", g);
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
				continue;
			}
		}
	}
	printf("\n");
}
