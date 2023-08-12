#include <stdio.h>

/**
 * main - Entry poin
 *
 * Description: print the alphabit from z to a
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}

