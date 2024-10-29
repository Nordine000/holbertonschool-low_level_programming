#include "main.h"
#include <stdio.h>
/**
 * _isdigit- check the code.
 * @c: identifie et vérifie si la valeur numérique du caractère
 * Return: Always 0.
 */

int _isdigit(int c)
{
return ((c >= '0' && c <= '9') ? 1 : 0);
}
