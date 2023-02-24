#include <stdio.h>

/**
 * main - the main function
 * Return: always 0 (success)
 */

int main(void)
{
	uint64_t num1 = 1, num2 = 2, count = 0;

	printf("%llu, %llu, ", num1, num2);
	count = 2;

	while (count < 98)
	{
		uint64_t next_num = num1 + num2;

		printf("%llu", next_num);

		count < 97 ? printf(", ") : printf("\n");

		count++;
		num1 = num2;
		num2 = next_num;
}

return (0);
}
