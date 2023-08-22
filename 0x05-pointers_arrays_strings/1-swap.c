#include "main.h"

/**
 * swap_int - function that swap the value of a give it to b
 *		initialize another var to give the value of b to it
 *		then give this value to a
 *
 * @a: checks the functon input of a
 * @b: checks the function input of b
*/

void swap_int(int *a, int *b)
{
	int c;

	*b = *a;
	 c = *b;
	 *a = c;
}
