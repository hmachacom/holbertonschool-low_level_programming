#include <stdio.h>
/**
 *main - print tebahpla reverse
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 26;
	char s = '\n', cba = 'z';

	while (i != 0)
	{
		putchar(cba);
		i--;
		cba--;
	}
	putchar(s);
	return (0);
}
