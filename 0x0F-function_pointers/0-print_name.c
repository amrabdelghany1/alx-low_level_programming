#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: input function
 * @f: function input pointer takes the name and print it
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
