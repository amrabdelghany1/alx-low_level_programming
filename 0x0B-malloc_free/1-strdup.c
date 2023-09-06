#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 *		allocated space in memory
 *
 * @str: array input pointer
 *
 * Return: n
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	;
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	els
	{
		for (i = 0; i < size; i++)
			n[i] == str[i];
	}
	return (n);
}
