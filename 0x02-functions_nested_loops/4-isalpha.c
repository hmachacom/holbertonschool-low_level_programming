#include "main.h"
/**
*_isalpha:-lowercase or uppercase
*@c:-caracter
* Return: zero ok
*/
int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
