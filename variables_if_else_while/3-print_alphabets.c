#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char C;
for (c = 'A'; C <= 'Z'; c++)
{
putchar((int)c);
putchar(C);
}
putchar('\n');
return (0);
}
