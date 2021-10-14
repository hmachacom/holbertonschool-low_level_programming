#include "main.h"
/**
 *string_toupper:-convertir a mayusculas
 *@w:String a convertir
 *Return:w
*/
char *string_toupper(char *w)
{
	int j = 0;

	while (w[j] != '\0')
	{
		if (w[j] >= 'a' && w[j] <= 'z')
		{
			w[j] = w[j] - 32;
		}

		j++;
	}

	return (w);
}
