#include "main.h"
/**
 * free_grid:- free memory.
 *@grid:ancho de la matriz
 *@height: alto de la matriz
 * Return: pointer.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
}
