#include "main.h"

/**
 * _palindrome - func
 * @back: char pointer
 * @front: char pointer
 *
 * Return: int
 */
int _palindrome(char *front, char *back)
{
	if (*front != *back)
		return (0);
	if (front > back)
		return (1);
	return (_palindrome(++front, --back));
}

/**
 * end - helper func
 * @s: char
 * Return: char
 */
char *end(char *s)
{
	if (*s == '\0')
		return (s);
	return (end(s + 1));
}

/**
 * is_palindrome - func
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	char *back;

	back = end(s);
	back--;
	return (_palindrome(s, back));
}
