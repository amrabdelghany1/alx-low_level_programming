#include <stdio.h>

/**
 * main - Entry poin
 *
 * Description: print the numbers between 0 to 9 with ascii code
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
