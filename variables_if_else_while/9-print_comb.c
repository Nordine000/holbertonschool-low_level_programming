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
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
/**
 #include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            putchar('0' + i);
            putchar('0' + j);
            if (i != 9 || j != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}
*/
