#include "main.h"
/**
 * _strlen_recursion:- string int
 * @s:first position of the array
 * Return: long arry.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
