int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else 
	{
		int halfRoot = _sqrt_recursion(n / 2);
		if (halfRoot * halfRoot == n)
			return (halfRoot);
		else if (halfRoot % 2 == 0 && halfRoot * halfRoot > n)
			return (2 * halfRoot);
		else if (halfRoot % 2 == 1 && halfRoot * halfRoot > n)
			return (2 * halfRoot + 1);
		else
			return (-1);
	}

}
