#include "main.h"

/**
 * factorial - func that print the functorial of n
 *
 * @n: input
 *
 * Return: n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (n);
}
