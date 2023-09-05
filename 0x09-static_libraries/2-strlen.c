#include "main.h"

/**
 * _strlen - function that checks the len of the value of
 *		address s
 *
 * @s: checks the function input
 *
 * Return: count (Success)
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
