#include <string.h>
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
		return (1);
	if (s[0] != s[length - 1])
		return (0);

	memcpy(s, s, length - 1 );
	return is_palindrome(s + 1);
}
