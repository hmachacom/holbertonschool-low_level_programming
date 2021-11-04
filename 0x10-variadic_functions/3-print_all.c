#include "variadic_functions.h"
/**
 *print_all:-funcion que imprime n de cadenas separados por un caracter
 *@format:tipo de dato
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *p;
	va_list h;

	va_start(h, format);
	if (!format)
		return;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(h, int));
			break;
		case 'i':
			printf("%d", va_arg(h, int));
			break;
		case 'f':
			printf("%f", va_arg(h, double));
			break;
		case 's':
			p = va_arg(h, char *);
			p ? printf("%s", p) : printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
}
