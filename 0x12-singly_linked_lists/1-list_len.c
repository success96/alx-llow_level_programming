#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t
 * @h: element of list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
