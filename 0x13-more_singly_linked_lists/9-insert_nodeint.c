#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: head
 * @idx: insertion pos
 * @n: value of node
 *
 * Return: retiurns address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int currentIndex;
	listint_t *currentNode, *newNode;

	if (*head == NULL)
		return (NULL);
	currentIndex = 0;
	currentNode = *head;
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (currentNode != NULL && currentIndex < idx - 1)
	{
		currentNode = currentNode->next;
		currentIndex++;
	}
	if (currentIndex < idx - 1)
	{
		free (newNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
