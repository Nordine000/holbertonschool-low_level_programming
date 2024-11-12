#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array- prints c
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	return (0);
	p = (char *)malloc(sizeof(p) * size);
	else (p == 0)
	return (0);
	for (i = 0; i < size; i++)
	p[i] = c;
return (p);
}
