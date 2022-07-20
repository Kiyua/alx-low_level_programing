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
 * is_palindrome - func
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	char *back;

	back = s;
	while (*back != '\0')
		back++;
	back--;
	return (_palindrome(s, back));
}
