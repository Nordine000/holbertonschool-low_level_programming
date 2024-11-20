#include <stdio.h>
#include "function_pointers.h"

/**
 * int index- check if a number is equal to 98
 * @cmp: compare
 * @array: tablo
 * @size: taille
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	if (size <= 0)
	{
		return (-1);
	}

	if  (array == 0 || cmp == 0)
	{
		return (-1);
	}

	for  (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		return (0);
	}
