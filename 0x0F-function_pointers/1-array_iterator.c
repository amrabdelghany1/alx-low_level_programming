#include "function_pointers.h"

/**
 * array_iterator - iterate throw an array
 *		throw a func pointer
 *
 * @array: input array
 * @size: input size
 * @action: func pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
