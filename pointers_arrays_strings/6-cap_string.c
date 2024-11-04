#include "main.h"
#include <stdio.h>

/**
 **cap_string- check the code
 *@n: liste de ma chaine
 * Return: Always 0.
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
	if (n[i] >= 'A' && n[i] <= 'Z')
		{
			n[i] = n[i] + 32;
		}
	i++;
	}
	return (n);
}

