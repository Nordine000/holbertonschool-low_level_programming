#include "main.h"

/**
 * print_rev- inverse ma chaine de caractere
 *@s: contient ma chaine
 * Return: Always 0.
 */

void print_rev(char *s)
{

	int end;
	int start;
	char c;
while (s[end] != '\0')
	{
	_putchar(*s);
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
