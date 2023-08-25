#include "main.h"

/**
 * _strcat - function that concatenates the 2 strings
 *
 * @dest: check the input function
 * @src: check the input function
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
