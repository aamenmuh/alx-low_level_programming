#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = *head;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
