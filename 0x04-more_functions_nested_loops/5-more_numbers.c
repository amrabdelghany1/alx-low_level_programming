#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times
 *		use _putchar 3 times
 *
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	int n, r, count;

	for (r = 1; r <= 10; r++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
