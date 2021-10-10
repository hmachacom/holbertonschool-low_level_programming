#include <stdio.h>
/**
 * main - prints numbers from 0 - 99.
 *
 * Return: 0
 */

int main(void)
{
	int cont = 0, c1, c2, c3;

	while (cont <= 999)
	{
		c1 = cont / 100;
		c2 = ((cont % 100) / 10);
		c3 = ((cont % 100) % 10);
		if (((cont % 100) > (cont / 100)) && (c1 != c2) && (c2 != c3))
		{
			if ((c3 != c1) && (c1 < c2) && (c1 < c3) && (c3 > c2))
			{
				putchar(cont / 100 + '0');
				putchar((cont % 100) / 10 + '0');
				putchar((cont % 100) % 10 + '0');
				if (cont < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		cont++;
	}
	putchar('\n');
	return (0);
}
