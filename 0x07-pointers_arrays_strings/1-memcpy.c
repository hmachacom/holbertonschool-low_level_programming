#include "main.h"
/**
 * _memcpy:- func copy n char the a array
 * @dest:first position of the array
 * @src:replacement characters
 * @n:number of characters to replace
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; dest[i] = src[i], i++)
	;
	return (dest);
}
