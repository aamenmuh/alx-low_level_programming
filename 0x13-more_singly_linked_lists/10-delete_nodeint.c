#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes at index
 * @head: head
 * @index: deletion pos
 *
 * Return: 1 suc, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int currentIndex;
	listint_t *currentNode, *cacheNode;

	currentIndex = 0;
	currentNode = *head;
	cacheNode = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = currentNode->next;
		currentNode->next;
		free(currentNode);
		return (1);
	}
	while (currentNode != NULL && currentIndex < index - 1)
	{
		currentNode = currentNode->next;
		currentIndex++;
	}
	if (currentIndex < index - 1)
		return (-1);
	cacheNode = currentNode->next;
	currentNode->next = cacheNode->next;
	free(cacheNode);
	return (1);
}
