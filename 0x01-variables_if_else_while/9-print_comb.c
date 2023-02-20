#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ',', followed by a space.
 * Numbers should be printed in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, m;

for (n = 0; n < 10; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar(n + '0');
putchar(',');
putchar(' ');
putchar(m + '0');
if (n == 8 && m == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
