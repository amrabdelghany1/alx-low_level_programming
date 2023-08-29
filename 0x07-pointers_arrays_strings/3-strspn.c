@inclue "main.h"

/**
 * _strspn - func that check if the char in accept
 *		is in s count it
 *
 * @s: checks the function input
 * @accept: checks the function input
 *
 * Return: counter
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	return (j);
}
