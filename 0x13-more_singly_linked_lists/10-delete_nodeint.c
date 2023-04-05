#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev_node = NULL;
	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		prev_node = current;
		current = current->next;
	}

	prev_node->next = current->next;
	free(current);

	return (1);
}
