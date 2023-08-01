#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints an int list
 * @h: head
 *
 * Return: returns unmber of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d", h-> n);
		h = h-> next;
		counter++;
	}
	return (counter);
}
