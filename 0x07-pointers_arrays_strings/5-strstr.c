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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			for (j = 0; needle[j] != '\0'; j++)
			{
			}
			j--;
		}
		if (haystack[i + j] == needle[j])
		{
			haystack += i;
			return (haystack);
		}
	}
	if (haystack[0] != needle[0])
	{
		*haystack = '\0';
	}
	return (haystack);
}
