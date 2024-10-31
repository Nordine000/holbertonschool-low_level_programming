#include "main.h"
#include <stdio.h>

/**
 * swap_int- permet de permuter des valeur
 *
 *@a: pointeur qui ont des valeur
 *@b : pointzyr
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	int perm;
*a = 10;
*b = 20;

perm = *a;
*a = *b;
*b = perm;
}
