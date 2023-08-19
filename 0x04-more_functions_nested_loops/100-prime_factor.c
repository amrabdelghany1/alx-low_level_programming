#include <stdio.h>

/**
 * _sqrt - do the square root
 *
 * @n: input number
 *
 * Return: square root of n
*/

double _sqrt(double n)
{
	float sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - prints the largest prime factor of number n
 *
 * @num: checking this number
*/

void largest_prime_factor(long int num)
{
	int prime, largestNumber;

	while (num % 2 == 0)
		num = num / 2;
	for (prime = 3; prime <= _sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largestNumber = prime;
		}
	}
	if (num > 2)
		largestNumber = num;
	printf("%d\n", largestNumber);
}
