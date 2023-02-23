#include <stdio.h>
/**
 * print_last_digit - prints the last digit
 * @n: the parameter
 *
 * Return: returns the last digit
 */
int print_last_digit(int n){
	return ( n / 10 == 0 ? (n / 10) % 10 : print_last_digit(n/10));
}
