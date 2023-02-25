#include <stdio.h>
#include "main.h"
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
        _putchar('-');
        n = -n;
    }

    while (n / divisor >= 10)
    {
        divisor = 10 * divisor;
    }

    while (divisor)
    {
        remainder = n % divisor;
        _putchar('0' + (n / divisor));
        n = remainder;
        divisor = divisor / 10;
    }
}
