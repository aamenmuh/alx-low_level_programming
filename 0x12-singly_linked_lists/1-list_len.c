#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns length of list
 * @paramh: pointer to list
 *
 * Return: returns the length
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
