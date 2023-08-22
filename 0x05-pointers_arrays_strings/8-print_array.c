#include "main.h"

/**
 * print_array - function that n elements of an
 *		array of ints
 *
 * @a: check input function
 * @n: checks the number of element
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
