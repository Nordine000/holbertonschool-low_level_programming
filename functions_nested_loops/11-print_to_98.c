#include "main.h"
#include <stdio.h>

/**
*print_to_98-Printsallnaturalnumbersfromnto98
*@n:Thestartingnumber
*/
void print_to_98(int n)
{
if (n <= 98)
{
for ( ; n < 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
_putchar(98);
}
else
{
for ( ; n > 98; n--)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
_putchar(98);
}
}
