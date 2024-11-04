#include "main.h"
#include <stdio.h>

/**
 * *_strncat- fusionne de lsite de chaine
 *@dest: liste
 *@src: liste
 *@n: desacremente
 * Return: Always 0.
 */



char *_strncat(char *dest, char *src, int n)
{
char *l = dest;
while (dest)
{
dest++;
}
while (n-- > 0 && src)
{
	dest++;
	src++;
}
dest = '\0';
return (l++);
}
