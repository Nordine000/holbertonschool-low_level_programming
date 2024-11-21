#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- renvoie somme de tous parametres
 *@n: entier
 *...: nombre variable d'arguments après le paramètre
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		int ar = va_arg(l, int);
sum += ar;
	}
	va_end(l);

	return (sum);
}
