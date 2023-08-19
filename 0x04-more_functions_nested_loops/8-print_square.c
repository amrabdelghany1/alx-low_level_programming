#include "main.h"

/**
 * print_square - print a square depending on the value of n
 *
 * @size: check the function input
*/

void print_square(int size)
{
	int i, l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
			for (l = 0; l < size; l++)
				_putchar(35);
			_putchar('\n');
	}
}
