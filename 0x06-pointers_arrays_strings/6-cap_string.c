#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * isLower - return if the char is greater than 97
 *		and less than or equal 122
 * isDelimiter - check whether ascii or not
 * @c: check the function input
 * @c: check the function input
 * @s: check the input function
 *
 * Return: ptr
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

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
