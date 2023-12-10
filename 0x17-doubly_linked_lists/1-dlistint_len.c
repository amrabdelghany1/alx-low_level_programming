#include "lists.h"

/**
 * dlistint_len - returns dlist length
 * @h: head ptr address
 *
 * Returns : List size
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
