#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: check the input function
 *
 * Return: ptr
*/

char *cap_string(char *s)
{
	int foundDelimit = 1;
	char *ptr = s;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
