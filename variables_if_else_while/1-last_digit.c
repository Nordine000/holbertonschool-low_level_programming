#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5)
{
printf("The string Last digit of %d followed by %d followed by
the string is %d \n", n);
}
else if (n == 0)
{
printf("The string Last digit of %d followed by %d followed by
the string is %d \n", n);
}
else if (n < 6)
{
printf("The string Last digit of %d followed by %d followed by
the string is %d \n", n);
}
return (0);
}
