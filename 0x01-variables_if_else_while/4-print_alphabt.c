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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
