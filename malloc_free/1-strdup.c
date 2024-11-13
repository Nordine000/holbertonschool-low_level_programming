#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup- duplique une chaine
 *@str: chaine
 * Return: Always 0.
 */

char *_strdup(char *str)
{
unsigned int i = 0;
char *p;
unsigned int f;

if (str == 0)
{
	return (0);
}

while (str[i] != '\0')
{
	i++;
}

p = malloc((i + 1) * sizeof(char));
if (p == 0)
{
	return (0);
}

for (f = 0; f <= i; f++)
{
	p[f] = str[f];
}

return (p);
}
