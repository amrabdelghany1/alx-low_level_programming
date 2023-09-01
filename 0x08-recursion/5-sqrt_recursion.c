#include "main.h"

/**
 * _sqrt_recursion - func that call square function
 *
 * @n: input
 * @val: input
 * Return: square(n, 1)
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - func checks the value
 *              and the int values and return value
 * @n: input
 * @val: check input variable val
 *
 * Return: if val*val equal n val, else if les than n
 *              call the square func + 1
 *              else -1
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
