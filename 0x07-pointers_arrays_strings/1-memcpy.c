#include "main.h"

/**
 * _memcpy - func that copy n numbers of
 *	src and paste it to dest
 *
 * @dest: check the function input
 * @src: checks the func input
 * @n: checks the func int input
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);

}
