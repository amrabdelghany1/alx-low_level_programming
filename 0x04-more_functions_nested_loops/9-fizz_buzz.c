#include <stdio.h>

/**
 * main - entry Point
 *
 * Fizz-Buzz - if the number is 3 print Fizz, 5 print Buzz
 *		15 print FizzBuzz otherwise print the number
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
