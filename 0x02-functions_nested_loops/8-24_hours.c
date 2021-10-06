#include "main.h"
/**
*jack_bauer:-imprimir las horas del dia.
*
* Return: zero ok
*/
void jack_bauer(void)
{
	int h = 0, m = 0, hh, mm;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(h / 10 + '0');
			hh = h % 10;
			_putchar(hh + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			mm = m % 10;
			_putchar(mm + '0');
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
