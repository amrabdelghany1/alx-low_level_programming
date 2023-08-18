#include "main.h"

/**
 * print_diagonal - function that prints \ if the
 *		input is greater than 0
 *
 * @n: to check the function input
*/

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
