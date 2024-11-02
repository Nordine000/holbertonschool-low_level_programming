#include "main.h"

/**
 * *_strcat- associer 2 chaines de caractere
 *@dest: char
 *@src: char
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

while (dest[i] != '\0')
{
	dest++;
}
while (src[j] != '\0')
{
	dest[i] = src[j];
	dest++;
	src++;
}
dest[i] = '\0';
return (0);
}
