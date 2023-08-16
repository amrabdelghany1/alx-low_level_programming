#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: check the function input
 *
 * Return: return 1 if the number greater than 0,
 *	return -1 if the number is less than 0 and
 *	return  0 (success) if the number is equal to 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
