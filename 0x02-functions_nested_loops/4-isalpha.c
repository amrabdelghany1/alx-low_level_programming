#include "main.h"

/**
 * _isalpha - check if the input is a char
 *
 * @c: to check funciton input
 *
 * Return: returns 1 if c is a letter
 *	otherwise return 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
