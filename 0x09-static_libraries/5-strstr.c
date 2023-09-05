#include "main.h"

/**
 * _strstr - func that check if chars in needle
 *		matches in haystack
 *
 * @haystack: checks the func input
 * @needle: checks the func input
 *
 * Return: p if matches otherwise NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);

		}
		haystack++;
	}
	return ('\0');
}
