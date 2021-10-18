#include "main.h"
#include <stdio.h>
/**
 * _memset:- func modific n char the a array
 * @s:first position of the array
 * @b:replacement characters
 * @n:number of characters to replace
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; s[i] = b, i++)
		;
	return (s);
}
