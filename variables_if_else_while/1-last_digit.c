#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = ((n % 10) + '0');
printf("Last digit %u", n);
printf("is((n % 10) + '0')");
if (n > 5)
{
printf("and is greater than %u", n);
}
else if (n == 0)
{
printf("and is %u \n", n);
}
else if (n < 6 && n != 0)
{
printf("and is less than 6 and not 0");
}
return (0);
}
