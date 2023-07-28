#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees the list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = current;
		current = current->next;
		free(head->str);
		free(head);
	}
}
