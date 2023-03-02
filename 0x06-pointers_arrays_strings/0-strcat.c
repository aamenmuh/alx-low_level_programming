/**
 * _strcat - a function that concatinates two strings
 * @dest: first para
 * @src: second para
 * 
 * Return: returns the concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0 , i;

	while(dest[destLen] != '\0')
		destLen++;
	for(int i = 0; src[i] != '\0'; i++)
		dest[destLen + i] = src[i];
	dest[destLen + i] = '\0';

		return dest;
}
