#include <stdio.h>
/**
 * print_number - prints an integer to standard output
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
    int divisor = 1;
    int remainder;

    if (n < 0)
    {
        putchar('-');
        n *= -1;
    }

    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor)
    {
        remainder = n % divisor;
        putchar('0' + (n / divisor));
        n = remainder;
        divisor /= 10;
    }
}
