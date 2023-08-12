#include <stdio.h>

/**
 * main - Entry poin
 *
 * Description: print the alphabit exept q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar('.');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}

