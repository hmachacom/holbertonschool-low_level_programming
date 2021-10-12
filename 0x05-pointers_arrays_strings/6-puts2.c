#include "main.h"
/**
 * puts2:- check the code
 *@str: vsr de entrada.
 * Return: Always 0.
 */
void puts2(char *str)
{
	for (int i = 0; *str != '\0'; i++)
	{
		int l = str[i];

		_putchar(l);
		str = str + 2;
	}
	_putchar('\n');
}
