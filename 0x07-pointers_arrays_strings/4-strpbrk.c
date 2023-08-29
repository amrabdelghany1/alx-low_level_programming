#include "main.h"

/**
 * _strpbrk - func checks the letters in accept
 *		and matches them with s
 *
 * @s: check the input function
 * @accept: checks the input func
 *
 * Return: i
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (i);
		}
	}
	return (i);
}
