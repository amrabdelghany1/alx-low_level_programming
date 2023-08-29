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
	int i, j;
	char *p;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				p = hackstack[i];
				return (p);
			}
		}
	}
	return (0);

}
