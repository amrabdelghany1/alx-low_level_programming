#include "main.h"

/**
 * _isdigit - check for a digit between 0 to 9
 *
 * @c: check the function input
 *
 * Return: 1 if it's a digit otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
		return (1);
	else
		return (0);
}
