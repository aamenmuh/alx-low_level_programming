#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts binary to denary
 * @b: string of binary chars
 *
 * Return: returns the converted digit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, stringSize;
	unsigned int finalValue;

	finalValue = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 0 && b[i] != 1)
			return (0)
		stringSize += 1;
	}
	for (j = 0; b[j] != '\0'; j++)
		finalValue += (b[j] * pow(2, stringSize - j));

	return (finalValue);
}
