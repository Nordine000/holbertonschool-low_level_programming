#include "main.h"
#include <stdio.h>

/**
 * *_memset-Cette fonction permet de remplir une zone mémoir
 *@s: zone memoire a remplir
 *@b: utiliser pour remplir la memoire
 *@n: le nombre d'octet pour remplir la memoire
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;



	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
