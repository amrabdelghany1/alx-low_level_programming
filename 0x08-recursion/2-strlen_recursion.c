#include "main.h"

/**
 * _strlen_recursion - func that return the len
 *		of a string
 *
 * @s: input
 *
 * Return: n
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
