#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len- renvoie le nombre d'element de la liste
 *@h: jbjb
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t moi = 0;

	while (h != NULL)
	{
		moi++;
		h = h->next;
	}
return (moi);
}
