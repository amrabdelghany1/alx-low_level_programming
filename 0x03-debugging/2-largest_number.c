#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
		printf("%i is the largest number", largest);
	}
	else if (b > a && b > c)
	{
		largest = b;
		printf("%i is the largest number", largest);
	}
	else
	{
		largest = c;
		printf("%i is the largest number", largest);
	}
	return (0);
}
