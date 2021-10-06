#include "main.h"
/**
*print_alphabet_x10:-print alphabetx10
*
* Return: zero ok
*/
void print_alphabet_x10(void)
{
	int con;

	for (con = 1; con <= 10; con++)
	{
		char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
