#include "main.h"

/**
 *puts2- imprime une chaine de caractere
 *@str: imprime une caine de caractere
 * Return: Always 0.
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
if (*str % 2 == 0)
{
_putchar(*str);
}
}
_putchar('\n');
}
