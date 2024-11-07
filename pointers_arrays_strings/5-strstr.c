#include "main.h"
#include <stdio.h>

/**
 * *_strstr- utilisée pour la correspondance de chaîn
 *@haystack: chaîne principal a examine
 *@needle: sous-chaînerechercher dans la cha�ne
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, o = 0, m = 0;
	int c = 0;

	while (needle[o] != '\0')
	{
		c++;
		o++;
	}

	for (i = 0; haystack[i] != '\0' ; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				m++;
				i++;
			}
		}

		if (c == m)
		{
			haystack = haystack + (i - c);
			return (haystack);
		}
		else
		{
			m = 0;
		}
	}
	return ('\0');
}
