#include "main.h"
#include <stdio.h>

/**
 * *_strncpy- check the code
 *@dest: liste
 *@src: liste
 *@n : incrementation
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
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
