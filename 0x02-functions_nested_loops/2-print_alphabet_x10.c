#include <stdio.h>
/**
 * print_alphabet - a function that prints all the alphabets
 * no parameters
 * 
 * Return: always returns 0 (success)
 * */
void print_alphabet(void) {

	for(int i=0; i<10; i++)
	{
	char letter = 'a';
	while (letter <= 'z') {
		printf("%c", letter);
		letter++;
	}
}
	printf("\n");
}
