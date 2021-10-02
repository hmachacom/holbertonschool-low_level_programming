#include <stdio.h>
/**
 *main - prints all possible combinations of single-digit
 *
 *Return: Always  (suucces)
 */
int main(void)
{
	int cont, espa, carat, digit;

	digit = '0';
	carat = ',';
	espa = ' ';
	cont = 0;
	while (cont != 10)
	{
		putchar(digit);
		if (cont < 9)
		{
			putchar(carat);
			putchar(espa);
		}
		digit++;
		cont++;
	}
	return (0);
}
