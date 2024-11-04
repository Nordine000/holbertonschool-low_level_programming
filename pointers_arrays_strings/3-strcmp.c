#include "main.h"
#include <stdio.h>

/**
 * _strcmp- compare des chaines de caractere
 *@s1: chaine
 *@s2: chaine
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;


while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
}
return (0);
}
