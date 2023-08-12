#include <stdio.h>

/**
 * main - Entry poin
 *
 * Description: print the numbers with ascii code
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
	printf("\n");
	return (0);
}
