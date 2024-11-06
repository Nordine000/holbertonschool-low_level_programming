#include "main.h"
#include <stdio.h>

/**
 * *_memcpy- copie une zone de m√©moire d'un emplacement sourc
 * @dest: pointeur vers la zone m√moire de destination
 * @src: pointeur qui copient les donn√es
 * @n: le nombre d'octet a copier
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
