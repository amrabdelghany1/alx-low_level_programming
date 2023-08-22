#include "main.h"

/**
 * rev_string - prints that reverses a string
 *
 * @s: check the function input
*/

void rev_string(char *s)
{
	int i = 0;

	while (*s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
