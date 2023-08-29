#include "main.h"

/**
 * _memset - func that check the n numbers of
 *		b signs and exchange them on
 *		the first n numbers in s
 *
 * @s: checks the function input
 * @b: checks the function input
 * @n: checks the int input
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
