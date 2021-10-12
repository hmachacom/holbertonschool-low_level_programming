#include "main.h"
/**
 *_strlen:- funcion que imprime la longitud de un numero
 *@s:-string.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l = 0;
		while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
