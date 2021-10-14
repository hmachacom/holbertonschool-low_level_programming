#include "main.h"
/**
 *string_toupper-Converts the lowercase letters of the string to uppercase
 *letters
 *@w:String to be converted.
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
