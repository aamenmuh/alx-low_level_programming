#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns node at index
 * @head: head
 * @index: index
 *
 * Return: returns node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	while (head != NULL && counter < index)
	{
		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
}
