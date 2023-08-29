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
	int i, counter;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept)
			counter++;
	}
	return (counter);
}
