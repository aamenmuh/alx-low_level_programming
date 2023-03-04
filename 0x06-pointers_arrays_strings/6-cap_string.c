#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
int i;

for (i = 1; str[i] != '\0'; i++)
{
if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}') && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}

return (str);
}
