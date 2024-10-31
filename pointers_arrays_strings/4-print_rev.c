#include "main.h"

/**
 * print_rev- inverse ma chaine de caractere
 *@s: contient ma chaine
 * Return: Always 0.
 */

void print_rev(char *s)
{

	int end = 0;
	int start;
	int c;
	while (s[end] != '\0')
	{

		end++;
	}
	c = end;
	start = c - 1;
	while (start >= 0)
	{
		_putchar(s[start]);
		start--;
	}
	_putchar('\n');
}
