#include "main.h"
#include <stddef.h>

/**
 * *_strchr- compare un caractere avec toute la chaine
 * @s: chaine de caractere
 * @c: le caractere a comparer
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
