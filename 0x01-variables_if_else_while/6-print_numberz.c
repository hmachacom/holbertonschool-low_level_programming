#include <stdio.h>
/**
 * main - print numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s, num = '0';

	s = '\n';
	for (n = 0; n <= 9; n++)
	{
		putchar(num);
		num++;
	}
	putchar(s);
	return (0);
}
