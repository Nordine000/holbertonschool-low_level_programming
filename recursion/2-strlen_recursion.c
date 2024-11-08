#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- renvoie la longueur de la chaine
 * @s: chaine
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
