#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - frees the list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}

}
