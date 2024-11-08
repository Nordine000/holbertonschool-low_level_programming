#include "main.h"

/**
 * _print_rev_recursion- imprime a l'envers
 *@s: chaine
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
