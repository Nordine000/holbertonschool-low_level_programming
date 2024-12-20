#include "main.h"
#include <stdio.h>

/**
 * *_strncat- fusionne de lsite de chaine
 *@dest: liste
 *@src: liste
 *@n: desacremente
 * Return: Always 0.
 */



char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
