#include "main.h"

/**
 * rev_string - prints that reverses a string
 *
 * @s: check the function input
*/

void rev_string(char *s)
{
	int i, j;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		ch = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = ch;

	}
}
