#include <stdio.h>

/**
 * main - the main function
 * Return: always 0 (success)
 */

int main(void)
{
	long num1 = 2, num2 = 8, sum = 10;

	while (num2 < 4000000)
	{
		long next_num = 4 * num2 + num1;

		sum += next_num;
		num1 = num2;
		num2 = next_num;
    }
    printf("%lu",sum - num2);
    return (0);
}
