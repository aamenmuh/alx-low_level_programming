/**
 * _sqrt_recursion: finds the square root of a number
 * @n: the number
 *
 * Return: returns the square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
			return (2 * _sqrt_recursion(n / 4) + (n % 4));

}
