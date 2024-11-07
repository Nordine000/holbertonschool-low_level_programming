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
	int p = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				p++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}
