#include <stdio.h>
/**
*main:-abecedario
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int a = 26, s = '\n';
	char abc = 'a', ABC = 'A';

	while (a != 0)
	{
		putchar(abc);
		abc++;
		a--;
	}
	a = 26;
	while (a != 0)
	{
		putchar(ABC);
		ABC++;
		a--;
	}
	putchar(s);
	return  (0);
}
