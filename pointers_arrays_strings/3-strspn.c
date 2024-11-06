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
	unsigned int i, l;
	int p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (accept[l] == s[i])
			{
				p++;
			}

			l++;
		}

		i++;
	}
	return (p);
}
