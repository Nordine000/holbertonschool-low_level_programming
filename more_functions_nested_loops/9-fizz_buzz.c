#include <stdio.h>

/**
 * main - m'imprime les nombres de 1 a 100 et remplace 3 et 5
 *
 * Return: Always 0.
 */

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
 if (a % 3 == 0)
{
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else if (a % 3 && a % 5)
{
printf("FizzBuzz");
}
else {
printf("%d", a);
}
}
return (0);
}
