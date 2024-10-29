#include "main.h"
#include <stdio.h>
/**
 * _isupper- check the code.
 * @c: identifie et vérifie si la valeur numérique du caractère
 * Return: Always 0.
 */

int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
