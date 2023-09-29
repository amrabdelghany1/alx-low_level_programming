#include "main.h"
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);

/**
 * last_index - Func that returns the last index
 * @s: input pointer
 * Return: n
*/

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - Func checks if the strig is a palindrome
 * @s: str input
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - palindrome checker
 * @s: string input
 * @start: the start of ints from right verses left
 * @end: the end of ints from left verses right
 * @mod: int input
 * Return: 0 or 1
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
