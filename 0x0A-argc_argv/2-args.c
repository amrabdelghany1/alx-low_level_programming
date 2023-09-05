#include <stdio.h>

/**
 * main - print the number of args passed into program
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
