#include <stdio.h>

/**
 * main - the main function
 * Return: always 0 (success)
 */

int main(void)
{
	int num1 = 2, num2 = 8, sum = 2;

	while (num2 < 4000000)
	{
		int next_num = 4 * num2 + num1;

		sum += next_num;
		num1 = num2;
		num2 = next_num;
    }
    printf(sum);
    return (0);
}
