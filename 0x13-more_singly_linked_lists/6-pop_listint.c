#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - remove head
 * @head: head
 *
 * Return: returns removed element
 */
int pop_listint(listint_t **head){
	int data;
	listint_t *current;

	current = *head;
	if (*head == NULL)
		return (0);
	data = current->n;
	*head = current->next;
	return (data);
}
