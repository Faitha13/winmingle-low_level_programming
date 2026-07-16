#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int start, int end);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks if a string is a palindrome
 * @s: string
 * @start: first index
 * @end: last index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
