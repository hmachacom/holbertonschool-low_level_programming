#include "main.h"
/**
 *reverse_array-inverts the matrix of numbers.
 *@a:array that is reversed.
 *@n:number of array elements.
 *Return: void
*/
void reverse_array(int *a, int n)
{
	int l, m, j = 0;

	m = n - 1;
	while (j < n / 2)
	{
		l = a[j];

		a[j] = a[m];

		a[m--] = l;

		j++;
	}
}
