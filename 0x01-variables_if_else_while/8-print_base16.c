#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char c;

while (i < 10)
{
c = i + '0';
putchar(c);
i++;
}

i = 97;
while (i < 103)
{
c = i;
putchar(c);
i++;
}

putchar('\n');

return (0);
}
