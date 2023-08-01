#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *current2;

	current = *head;
	current2 = *head;
	while (current2 != NULL)
	{
		current = *head;
		current2 = current2->next;
		free(current);
	}
	free(current2);
	*head = NULL;
}
