#include "main.h"
/**
 * _print_rev_recursion:- fuc que imprime una cadena alreves
 * @s:first position of the array
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
