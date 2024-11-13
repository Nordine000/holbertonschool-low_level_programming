#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- grille 2 dimension
 *@grid: tbleau d'entier
 *@height: hauteur de grille
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
	for (; height >= 0; height--)
		free(grid[height]);
	}
	free(grid);
}
