#include "main.h"

/**
 * print_alphabet_x10 - utlizzes _putchar and nested loop to print
 *		a - z in lower case
*/

void print_alphabet_x10(void)
{
	char letter;
	int ch = 0;

	while (ch < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		ch++;
	_putchar('\n');
	}
}
