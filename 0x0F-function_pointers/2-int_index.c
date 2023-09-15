#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: input array
 * @size: input int
 * @cmp: function pointer
 *
 * Return: int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i])
					return (i);
			i++
		}
	return (-1);
}