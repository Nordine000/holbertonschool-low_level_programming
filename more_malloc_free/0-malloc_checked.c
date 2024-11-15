#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alloue de la memoire
 * @b:
 *
 * Return: pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == 0)
		exit(98);
	return (a);
}
