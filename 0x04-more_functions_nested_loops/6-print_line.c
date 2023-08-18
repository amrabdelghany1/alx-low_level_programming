#include "main.h"

/**
 * print_line - to print _ follwed by newline if
 *		n > 0 otherwise print newline
 *
 * @n: check the function input
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
			_putchar("_");
		_putchar('\n');
		else
			_putchar('\n');
	}
}
