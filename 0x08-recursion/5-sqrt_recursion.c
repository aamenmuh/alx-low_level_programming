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
		else if (halfRoot % 2 == 0)
			return (2 + _sqrt_recursion(halfRoot));
		else if (halfRoot % 2 == 1)
			return (_sqrt_recursion(halfRoot) + 3);
		else
			return (-1);
	}

}
