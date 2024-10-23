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
for (c = 'a'; C = 'A'; c <= 'z', c++, C++)
{
putchar(c);
putchar(C);
}
putchar('\n');
return (0);
}
