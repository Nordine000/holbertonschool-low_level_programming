#include "main.h"
#include <stdio.h>

/**
 * _isupper- check the code.
 * @c: identifie et vérifie si la valeur numérique du caractère
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
