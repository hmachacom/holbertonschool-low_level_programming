#include <stdio.h>
/**
 * main: - It seeks to print the numbers from 0-9 only using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s, num = '1';
	s = '\n';
	for (n = 1; n <= 9; n++)
	{
		putchar(num);
		num++;
	}
	putchar(s);
	return (0);
}
