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
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			{
			s = s + i;
			return (s);
			}
		}
	}
	s = 0;
	return (s);
}
