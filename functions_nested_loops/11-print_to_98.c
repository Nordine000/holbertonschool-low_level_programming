#include "main.h"
#include <stdio.h>

/**
*print_to_98-Printsallnaturalnumbersfromnto98
*@n:Thestartingnumber
*/
void print_to_98(int n)
{
int o;

for (; n <= 98; n++)
{
if (n >= 10)
{
o = n / 10;
_putchar(o + '0');
}
o = n % 10;
_putchar(o + '0');
if (n < 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
