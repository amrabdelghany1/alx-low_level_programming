#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
