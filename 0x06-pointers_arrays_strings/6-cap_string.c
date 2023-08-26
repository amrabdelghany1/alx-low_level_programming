#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: check the input function
 *
 * Return: ptr
*/

char *cap_string(char *str)
{
	int i = 1;
	char *ptr = str;

	while (*str)
	{
		if (isDelimiter(*str))
			i = 1;
		else if (isLower(*str) && i)
		{
			*str -= 32;
			i = 0;
		}
		else
			i = 0;
		str++;
	}
	return (ptr);
}
