#include "main.h"
/**
 * _isdigit:- check digit.
 *@c:variable de entrada.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
