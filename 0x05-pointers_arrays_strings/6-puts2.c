#include "main.h"
/**
 * puts2:- check the code
 *@str: vsr de entrada.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int l = str[i];

		_putchar(l);
		str++;
	}
	_putchar('\n');
}
