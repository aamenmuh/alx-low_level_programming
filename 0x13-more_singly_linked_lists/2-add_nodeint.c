#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds node to begin
 * @head: head of list
 * @n: value of node
 *
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if(newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		return (newNode);
	}
	newNode->next = *head;
	*head = newNode;
	return(newNode);
}
