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
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number(n / 2) == 1);
}
