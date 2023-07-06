/**
 * factorial - Calcluates factoiral of number
 * @n: the number
 *
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
