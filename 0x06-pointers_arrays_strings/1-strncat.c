#include "main.h"

/**
 * _strncat:- check the code
 *@dest:string1
 *@src:string2
 *@n: numero de byts a copiar
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	 int i;

	char *e = dest;

	if (n > 0)
	{
		for (i = 0; *dest != '\0'; i++)
		dest++;

		for (i = 0; i < n; i++)
		{
		*dest = *src;
		dest++;
		src++;
		}
		*dest = '\0';
		dest = e;
	}
	return (dest);
}
