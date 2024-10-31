#include "main.h"

/**
 * print_rev- inverse ma chaine de caractere
 *@s: contient ma chaine
 * Return: Always 0.
 */

void print_rev(char *s)
{

	int end = 0;
	int start = 0;
	char c;
while (s[end] != '\0')
	{
	end++;
	end--;
	}
while (start < end)
{
	c = s[start];
	s[start] = s[end];
	s[end] = c;

	start++;
	end--;
}
_putchar('\n');
}
