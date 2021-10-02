#include <stdio.h>
/**
 * main - prints numbers from 0 - 99.
 *
 * Return: 0
 */

int main(void)
{
	int cont = 0;

	while (cont < 99)
	{
		putchar(cont / 10 + '0');
		putchar(cont % 10 + '0');
		if (cont != 99)
		{
			putchar(',');
			putchar(' ');
		}
		cont++;
	}
	putchar('\n');
	return (0);
}
