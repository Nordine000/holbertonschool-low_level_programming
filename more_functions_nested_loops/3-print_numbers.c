#include "main.h"

/**
 * print_numbers- me sert a imprimer ma liste de nombre entier
 * Return: Always 0.
 */

void print_numbers(void)
{
	char a;

for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}