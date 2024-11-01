#include "main.h"

/**
 * more_numbers - me sert a imprimer des nombres entier
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

while (j < 10)
{
while (i <= 14)
{
if (j > 9)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
i++;
}
_putchar('\n');
j++;
}
}
}
