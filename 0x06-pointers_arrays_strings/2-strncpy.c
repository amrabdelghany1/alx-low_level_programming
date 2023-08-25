#include "main.h"

/**
 * _strcpy - function that copies a string
 *
 * @dest: check the input funciton
 * @src: check the input function
 * @n: check the integer input
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
