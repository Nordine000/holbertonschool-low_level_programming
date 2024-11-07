#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk- cherche une caractere
 * @s: la chaine
 * @accept: le caractere
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int o;

	while (s)
	{
		for (o = 0; accept[o] != '\0'; o++)
		{
			if (*s == accept[o])
			{
				return (s);
			}

		}
		s++;
	}
	return (0);
}
