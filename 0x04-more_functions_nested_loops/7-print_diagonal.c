#include "main.h"

/**
 * print_diagonal - function that prints \ if the
 *		input is greater than 0
 *
 * @n: to check the function input
*/

void print_diagonal(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	} else
		for (line = 0; line < n; line++)
		{
			_putchar('\\');
			_putchar('\n');
		}
}
