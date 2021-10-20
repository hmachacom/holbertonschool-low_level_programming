#include "main.h"
/**
 * print_diagsums;-print la suma de las diagonales matris cuadrada
 * @a:first position.
 * @size:;- tamaño de la matriz
*/
void print_diagsums(int *a, int size)
{
	int i, dig1 = 0, dig2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
		dig1 += *(a + i);
	for (i = size - 1; i < (size * size) - 1; i += size - 1)
		dig2 += *(a + i);
	printf("%d, %d\n", dig1, dig2);
}
