#include "main.h"

/**
 * print_triangle- imprimer en sens contraire
 *@size: est le nombre de ligne
 * Return: Always 0.
 *
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 0;  j < size - i; j++)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
}
_putchar('\n');
}
