#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- check the code
 *@a: tableau
 *@size: taille
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int o = 0, p = 0;

	for (i = 0 ; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				o += *(a + (i * size) + j);
			}
			if (i + j == size - 1)
			{
				p += *(a + (i * size) + j);
			}
		}
	}
}
