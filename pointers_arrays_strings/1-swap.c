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
perm = *a;
*a = *b;
*b = perm;
}
