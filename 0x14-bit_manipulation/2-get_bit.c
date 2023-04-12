/**
 * get_bit: gets the value of the given bit
 * @n: value in denary
 * @index: positionf of bit to be found
 *
 * Return: returns the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 33)
		return (-1);

	return ((n >> index) & 1);
}
