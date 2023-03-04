#include <stdio.h>
/**
 * leet - encodes a string
 * @str: pointer to the string
 *
 * Return: returns the encoded string
 */
char *leet(char *str)
{
int i, j;
char lowerCase[] = {'a' , 'e' , 'o' , 't' , 'l'};
char upperCase[] = {'A' , 'E' , 'O' , 'T' , 'L'}; 
char encoding[] = {'4' , '3' , '0' , '7' , '1'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5 ; j++)
{
if (str[i] == lowerCase[j] || str[i] == upperCase[j])
str[i] = encoding[j];
}
}
return (str);
}
