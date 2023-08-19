include "main.h"

/**
 * print_triangle - function that prints a triangle with #
 *	if the number > 0 otherwise prints a newline
 *
 * @size: check the function input
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j >= i; j--)
				_putchar(' ');
		}
		_putchar('#');
	}
}
