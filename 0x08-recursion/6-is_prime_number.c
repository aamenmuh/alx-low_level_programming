/**
 * is_prime_number - returns if the number is prime
 * @n: the number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if ((n % 2) == 0 && n != 2)
	{
		return (0);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3 || n == 5)
	{
		return (1);
	}
	if ((n - 1) % 6 != 0 && (n + 1) % 6 != 0)
	{
		return (0);
	}
	return (is_prime_number(n - 5) || is_prime_number(n - 7));
}
