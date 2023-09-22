#include "lists.h"

/**
 * list_len - eturns the number of elements in a linked list
 * @h: input pointer
 * Return: list size
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
