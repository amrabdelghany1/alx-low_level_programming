#include "main.h"

/**
 * _puts - function that print a string followed by
 *		new line
 *
 * @str: checks the function input
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
	}
	_putchar('\n');
}
