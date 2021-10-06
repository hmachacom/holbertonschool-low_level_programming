#include "main.h"
/**
*_islower:-lowercas
*@c:-caracter
* Return: zero ok
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
