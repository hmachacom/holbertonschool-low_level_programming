#include <stdio.h>
/**
*main:-abecedario
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int a = 26, s = '\n';
	char abc = 'a';

	while (a != 0)
	{
		putchar(abc);
		abc++;
		a--;
	}
	putchar(s);
	return  (0);
}
