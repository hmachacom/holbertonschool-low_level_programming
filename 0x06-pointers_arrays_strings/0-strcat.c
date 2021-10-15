#include "main.h"

/**
 * _strcat:- funcion que contatena dos string
 *@dest:string1
 *@src:string2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;

	char *e = dest;

	for (i = 0; *dest != '\0'; i++)
	dest++;

	for (i = 0; *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = e;
	return (dest);
}
