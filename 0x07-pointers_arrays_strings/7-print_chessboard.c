#include "main.h"
/**
 * print_chessboard;- print tablt ajedrez
 * @a:first position.
*/
void print_chessboard(char (*a)[8])
{
	int s = 0;
	int l = 0;

	while (l < 8)
	{
		s = 0;
		while (s < 8)
		{
			_putchar(a[l][s]);
			s++;
		}
		_putchar('\n');
		l++;
	}
}
