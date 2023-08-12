#include <stdio.h>

/**
 * main - Entry poin
 *
 * Description: print number in hexdecimal
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}

