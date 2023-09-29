#include "main.h"

/**
 * is_prime_number - Func checks if n is a prime number
 * @n: input int
 * Return: 0 or 1
*/

int check_prime(int n, int n2);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime -  function that returns 1 if the input integer
 *		is a prime number, otherwise return 0
 * @n: input n
 * @n2: input n
 * Retrun: int
*/

int check_prime(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (0);
}
