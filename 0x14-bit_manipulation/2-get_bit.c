/**
 * get_bit: gets the value of the given bit
 * @n: value in denary
 * @index: positionf of bit to be found
 * Return: returns the value of the bit at the given position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
