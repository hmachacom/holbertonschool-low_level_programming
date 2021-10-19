#include "main.h"
/**
 * _strstr:- func scan char the a array
 * @haystack:string to scan
 * @needle:- char a buscar
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0, i, c;

	for (i = 0 ; haystack[i] != '\0'; i++)
	{
		c = 0;
		if (haystack[i] == needle[c])
		{
			n = 0;
			for (; needle[c] != '\0'; c++)
			{
				if (haystack[i + c] == needle[c])
					n++;
			}
			if (n == c)
				return (haystack += i);
		}
	}
	if (*haystack != *needle)
	{
		haystack = NULL;
	}
	return (haystack);
}
