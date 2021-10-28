#include "main.h"
/**
 * alloc_grid:- which contains a copy of the string given as a parameter.
 *@width:ancho de la matriz
 *@height: alto de la matriz
 * Return: pointer.
 */
int **alloc_grid(int width, int height)
{
	int **b, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	b = (int **) malloc(sizeof(int *) * width);
	if (b == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < width; i++)
		{
			b[i] = (int *) malloc(sizeof(int) * height);
			if (b[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(b[j]);
				}
				free(b);
				return (NULL);
			}
			for (j = 0; j < height; j++)
				b[i][j] = 0;
		}
	}
	return (b);
}
