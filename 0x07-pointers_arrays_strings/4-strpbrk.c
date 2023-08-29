#include "main.h"

/**
 * _strpbrk - func checks the letters in accept
 *		and matches them with s
 *
 * @s: check the input function
 * @accept: checks the input func
 *
 * Return: p if there is matching
 *		otherwise 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
