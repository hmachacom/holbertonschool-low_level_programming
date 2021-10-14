#include "main.h"
/**
 * puts2:- funcion para imprimir parte de una cadena
 *@str: vsr de entrada.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)/*ciclo para avanzar posiciones en str*/
	{
		if (i % 2 == 0)
		{
		putchar(str[i]);/*imprime str en la posicion i*/
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
