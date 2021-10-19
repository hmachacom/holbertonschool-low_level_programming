#include "main.h"
/**
 * _strstr:- func scan char the a array
 * @haystack:string to scan
 * @needle:- char a buscar
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	if ((*haystack != '\0') && (*needle == '\0'))
		return (haystack);
	if ((*haystack == '\0') && (*needle != '\0'))
		return (haystack);
	if ((*needle == '\0') && (*haystack != *needle))
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{
			if ((needle[j + 1] == '\0') && (needle[j] == haystack[j + i]))
			{
				haystack += (i);
				return (haystack);
			}
		}
	}
	if (haystack[0] != needle[0])
	{
		*haystack = '\0';
	}
	return (haystack);
}
