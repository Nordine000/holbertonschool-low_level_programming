#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a;

for (a >= 0; a <= 100, a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
else if (a % 3 == 0)
{
putchar("Fizz");
}
else if (a % 5 == 0)
{
putchar("Buzz");
}
}
}
putchar('\n');
}
