#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: check input funciton
 * @src: check input function
 * @n: check the int input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (sest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
