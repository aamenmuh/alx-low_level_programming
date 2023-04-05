#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a linked list, even if it contains a loop
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count;

	count = 0;
	tortoise = hare;
	hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			count += 1;
			break;
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count += 1;
	}

	if (hare && hare->next == NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count += 1;
	}

	if (!tortoise || !hare)
		exit(98);

	hare = tortoise->next;
	while (tortoise != hare)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count += 1;
		tortoise = tortoise->next;
	}

	printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
	count += 1;

	return (count);
}
