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
else
{
for (i = 10; i - size; i++)
{
for (j = 10;  j < size; j++)
{
_putchar(' ');
}
_putchar('#');
}
}
}
