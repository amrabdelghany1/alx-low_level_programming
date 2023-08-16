#include "main.h"

/**
 * _islower - to check if the char is lower
 *
 * @c: check function input
 *
 * Return: returns 1 if c is lowercase
 *		otherwise  0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
