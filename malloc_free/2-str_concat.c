#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat- concatene deux chaines
 *@s1: chaine 1
 *@s2: chaine 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, p, k, j;
	char *a;


	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (p = 0; s2[p] != '\0'; p++)
	{
	}
	a = malloc(sizeof(char) * (i + p + 1));

	if (a == 0)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
	{
		a[k] = s1[k];
	}


	for (j = 0; j < p; k++, j++)
	{
		a[k] = s2[j];
	}
	a[k] = '\0';

	return (0);
}
