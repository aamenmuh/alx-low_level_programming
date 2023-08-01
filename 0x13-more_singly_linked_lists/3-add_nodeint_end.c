#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds to end
 * @head: head
 * @n: value of node
 *
 * Return: returns newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	currentNode = (listint_t *)malloc(sizeof(listint_t));
	if (currentNode == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
		currentNode = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
