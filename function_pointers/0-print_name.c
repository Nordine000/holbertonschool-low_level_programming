#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- prints a name as is
 * @name: name of the person
 *@f: pop
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 || f != 0)
	{
	(*f)(name);
	}
}
