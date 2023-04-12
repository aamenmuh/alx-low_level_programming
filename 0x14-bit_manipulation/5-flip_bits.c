/**
 * flip_bits: gets you required flips
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of req bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differentBits;
	unsigned int numberOfBits;

	differentBits = n ^ m;

	while (differentBits != 0)
	{
		numberOfBits += differentBits & 1;
		differentBits >>= 1;
	}

	return (numberOfBits)
}
