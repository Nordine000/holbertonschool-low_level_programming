#include "main.h"

/**
 * times_table- check the code
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, a;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
a = i * j;

if (j > 0)
_putchar(' ');
_putchar(a + '0');
if (j < 9)
_putchar(',');
}
_putchar('\n');
}
}
