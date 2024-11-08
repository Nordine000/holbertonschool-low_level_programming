#include "main.h"

/**
 * _print_rev_recursion- imprime a l'envers
 *@s: chaine
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{

	if (*s != 0)
	{
		_putchar(*s);
_print_rev_recursion(s + 1);
	}
}
