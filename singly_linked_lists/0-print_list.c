#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list- imprime la liste chainer et le nombre de noeud
 *@h: format
 * Return: nbre de noeud
 */

size_t print_list(const list_t *h)
{

	size_t nbre = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nbre++;
		h = h->next;
	}
	return (nbre);
}
