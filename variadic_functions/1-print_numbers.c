#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- print num
 *@separator: chaine
 *@n: entier
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list t;
	unsigned int o;
	int p = 0;

	if (n == 0)
	{
		return;
	}
	va_start(t, n);
	for (o = 0; o < n; o++)
	{
		int g = va_arg(t, int);
p += g;
		printf("%d", p);
		if (separator != NULL || o < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(t);
	printf("\n");
}
