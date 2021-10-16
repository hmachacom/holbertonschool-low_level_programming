#include "main.h"

/**
 *_strcmp:- Funcion que compara dos cadenas
 *@s1:strr 2
 *@s2:string2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
/*
*en el for se valida que ambas cadenas en la posicion
*i sean iguales si no lo son se sale del ciclo
*/
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
	;
	return (s1[i] - s2[i]);

}
