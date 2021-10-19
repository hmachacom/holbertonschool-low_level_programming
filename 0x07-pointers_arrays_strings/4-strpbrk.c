#include "main.h"
/**
 * _strpbrk:- func scan char the a array
 * @s:string to scan
 * @accept:- char a buscar
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *s != '\0'; s++, i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	s = '\0';
	return (s);
}
