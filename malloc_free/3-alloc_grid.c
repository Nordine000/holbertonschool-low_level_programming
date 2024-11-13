#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- tableau 2d
 * @width: taille
 * @height: taille
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;


	if (width <= 1)
	{
		return (0);
	}
	if (height < 1)
	{
		return (0);
	}
	d = malloc(height * sizeof(int *));
	if (d == 0)
		return (0);


	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
		if (d[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(d[j]);
			free(d);
			return (0);
	}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			d[i][j] = 0;

	return (d);
}
