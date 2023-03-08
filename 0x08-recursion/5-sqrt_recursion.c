int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else 
	{
		int middle = (1 + n) / 2;

		if (middle / n > middle)
			return _sqrt_recursion(middle - 1);
		else
		{
			remainder = _sqrt_recursion(n - middle * middle);
			return remainder == -1 ? -1 : middle;
		}
	}

}
