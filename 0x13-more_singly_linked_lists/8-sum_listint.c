#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums list
 * @head: head
 *
 * Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
