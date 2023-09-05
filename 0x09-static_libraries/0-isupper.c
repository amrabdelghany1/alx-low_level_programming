#include "main.h"

/**
 * _isupper - check if the letter is Upper case
 *
 * @c: check function input
 *
 * Return: 1 if it's Upper case otherwise 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
