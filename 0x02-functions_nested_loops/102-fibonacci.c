#include <stdio.h>

/**
 * main - the main function
 * Return: always 0 (success)
 */

int main(void)
{
	int num1 = 1, num2 = 2, count = 0;

	printf("%d, %d, ", num1, num2);
	count += 2;

	while (count < 50)
	{
		int next_num = num1 + num2;
		printf("%d", next_num);

		count < 49 ? printf(", ") : printf('\n');

		count++;
		num1 = num2;
		num2 = next_num;
    }

    return (0);
}
