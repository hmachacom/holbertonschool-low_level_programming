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
			for (; needle[c] != '\0'; c++)
			{
				if (haystack[i + c] == needle[c])
					n++;
			}
			if (n == c)
				return (haystack += i);
		}
	}
	return (haystack = '\0');
}
