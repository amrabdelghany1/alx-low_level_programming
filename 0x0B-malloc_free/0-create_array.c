#include "main.h"

/**
 * create_array - that creates an array of chars
 *
 * @size: input int
 * @c: input char
 *
 * Return: n
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == NULL || n == NULL)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
