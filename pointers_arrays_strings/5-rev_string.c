#include "main.h"
#include <stdio.h>

/**
 * rev_string- check the code
 *@s: est un pointeur qui pointe vers une chaine de caractere
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;

	int end = 0;
	int start = 0;

	while (*s != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
