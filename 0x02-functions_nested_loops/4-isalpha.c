#include <stdio.h>

/**
 * _isalpha - checks if the parameter is alphabetic
 * @c: the parameter
 * 
 *
 * Describtion: zeby
 */

int _isalpha(int c)
{
	return (c > 64 ? (c < 123 ? 1 : 0) : 0);
}
