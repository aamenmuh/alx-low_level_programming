/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (n == 2 ? 1 : 0);
	if (is_prime_number(n % (n / 2 + (n % 2))))
		return (0);
	return (1);
}
