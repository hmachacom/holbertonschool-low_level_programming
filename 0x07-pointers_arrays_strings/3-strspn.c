#include "main.h"
/**
 * _strspn:- func scan char the a array
 * @s:string to scan
 * @accept:- char a buscar
 * Return: pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
