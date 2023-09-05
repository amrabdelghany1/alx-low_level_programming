#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: take the function input
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
