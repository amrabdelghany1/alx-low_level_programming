#include "main.h"

/**
 * rev_string - prints that reverses a string
 *
 * @s: check the function input
*/

void rev_string(char *s)
{
	int i;

	while (s[i])
		i++;
	
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
