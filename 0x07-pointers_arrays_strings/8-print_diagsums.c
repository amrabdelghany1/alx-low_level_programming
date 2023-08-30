#include "main.h"

/**
 * print_diagsums - calculate the array numbers
 *		based on the size
 *
 * @a: input
 * @size: input
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0,  sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
