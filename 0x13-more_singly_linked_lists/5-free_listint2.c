#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;
	while (*head != NULL)
	{
		current = *head;
		*head = *head->next;
		free(current);
	}
	*head = NULL;
}
