#include "main.h"

/**
 * _isupper - check if the letter is Upper case
 *
 * @c: check function input
 *
 * Return: 0 (success)
*/

int _isupper(int c)
{
	int ch;

	if (ch >= 65 && ch <= 90)
		return (1);
	return (0);
}
