#include <stdio.h>

/**
 * main - print number of the passed arguments
 *
 * @argc: int input
 * @argv: pointer to an array
 *
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);

}
