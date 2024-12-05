#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- renvoie le nbre d'element
 * @h: pointeur
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t pour = 0;

	while (h != NULL)
	{
		pour++;
		h = h->next;
	}
	return (pour);
}
