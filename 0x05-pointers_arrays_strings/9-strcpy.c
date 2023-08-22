#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *			including the terminating null byte (\0),
 *			to the buffer pointed to by dest
 *
 * @dest: check input function
 * @src: check input function
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
