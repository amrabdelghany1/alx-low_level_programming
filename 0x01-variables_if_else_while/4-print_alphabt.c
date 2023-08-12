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
	char ch1 = 'q';
	char ch2 = 'e';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z' && ch != 'q' && ch != 'e')
	putchar('\n');
	return (0);
}
