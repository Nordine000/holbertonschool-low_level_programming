#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0'); /* Print digit */
if (i != 9) /* If not the last number, print ', ' */
{
putchar(',');
putchar(' ');
}
}
putchar('\n');          /* Print newline after the numbers */
return (0);
}
