#include "main.h"
/**
 * _strchr:- func copy n char the a array
 * @s:first position of the array
 * @c:share characters
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			 break;
		s++;
	}
	if (*s != c)
		s ='\0';
	return (s);
}
