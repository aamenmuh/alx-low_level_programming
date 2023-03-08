/**
 * _pow_recursion - returns x power y
 * @x: first para
 * @y: second para
 *
 * Return: returns x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (x);
	else
		return (x * _pow_recursion(x , y - 1));
}
