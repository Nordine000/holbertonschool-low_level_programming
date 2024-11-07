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
	int i;
	int o = 0, p = 0;

	for (i = 0; i < size; i++)
	{
		o += a[i * size + i];
		p += a[i * size + (size - 1 - i)];
	}
}
