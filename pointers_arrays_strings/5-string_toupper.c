#include "main.h"
#include <stdio.h>

/**
 **string_toupper- check the code
 *@n: liste de ma chaine
 * Return: Always 0.
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
