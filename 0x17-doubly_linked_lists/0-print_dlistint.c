#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: address for the head node
 *
 * Return: list size
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
