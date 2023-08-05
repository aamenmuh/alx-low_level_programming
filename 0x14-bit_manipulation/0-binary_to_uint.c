#include <stdio.h>
/**
 * binary_to_uint - converts binary string to denary
 * @b: binary rep
 *
 * Return: returuns uint rep
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, i;

	decimal = 0;
	i = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal <<=1;
		decimal |= (b[i] - '0');
		i++;
	}
	return (decimal);
}
