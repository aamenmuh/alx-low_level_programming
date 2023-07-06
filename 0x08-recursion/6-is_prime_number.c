/**
 * helperPrime - a helper function with two paras
 * @n: the number
 * @divisor: the divisor.
 *
 * Return: 1 or 0
 */
int helperPrime(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (helperPrime(n, divisor - 1));
}
/**
 * is_prime_number - returns if the number is prime
 * @n: the number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (helperPrime(n,n - 1));
}
