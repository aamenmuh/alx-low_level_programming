#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a list
 * @h: list pointer
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
