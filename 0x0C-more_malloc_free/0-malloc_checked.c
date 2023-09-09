#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: input int
 *
 * Return: m
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
