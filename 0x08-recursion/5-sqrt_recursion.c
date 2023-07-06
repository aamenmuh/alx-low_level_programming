/**
 * _pow_recursion - returns square root of number
 * @n: the number
 *
 * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 1 || n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (2 * _sqrt_recursion(n / 4));
}
