#include "main.h"
#include <stdio.h>

/**
 * _strspn- verifie combien de caractere correspond au caractere donner
 *@s: chaine
 *@accept: caractere de comparaison
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept)
		{
			i++;
		}
	}
	return ("%d", i);
}
