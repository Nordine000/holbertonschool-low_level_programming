#include "main.h"

/**
 *puts2- imprime une chaine de caractere
 *@str: imprime une caine de caractere
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
}
