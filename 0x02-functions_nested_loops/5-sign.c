#include <stdio.h>
/**
 * print_sign - checks the parity of the number
 * @n: the parameter
 *
 * Return: returns 1, 0, or -1 (sucess).
 */
int print_sign(int n)
{
	if (n>0)
	{
		printf("+");
		return (1);
	}
	else if (n==0)
	{
		printf("0");
		return (0);
	}
	else{
		printf("-");
		return (-1);
	}
}
