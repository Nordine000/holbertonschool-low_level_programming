#include "main.h"
#include <stdio.h>

/**
 * _isupper- check the code.
 * @c: identifie et vérifie si la valeur numérique du caractère
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'A')
{
_putchar(':');
return (1);
}
else
{
_putchar(':');
return (0);
}
_putchar('\n');
}
