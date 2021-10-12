#include "main.h"
/**
 *print_rev:- check the code
 *@s:-string.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	while (l > 0)
	{
		putchar(*s);
		s--;
		l--;
	}
	putchar('\n');
}
