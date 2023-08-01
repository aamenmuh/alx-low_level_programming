#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns length of list
 * @h: head
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
