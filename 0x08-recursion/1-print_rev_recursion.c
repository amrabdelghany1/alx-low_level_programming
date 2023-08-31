#include "main.h"

/**
 * _ptint_rev_recursion - func that print a reversed
 *		string
 *
 * @s: input
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
