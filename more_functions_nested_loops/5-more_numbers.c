#include "main.h"

/**
 * more_numbers - me sert a imprimer des nombres entier
 *
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a;
int b;

for (a = 0, b = 0; a <= 10 && b <= 14; a++, b++)
{
if (b > 9)
{
_putchar('1');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
