#include "main.h"

/**
 * _strlen_recursion - length of string.
 * @str: a string
 * Return: the length of string
 */
int _strlen_recursion(char *str)
{
	if (str[0] != '\0')
		return (1 + _strlen_recursion(str + 1));
	return (0);
}

/**
 * pal_checker - check if str is palindrome.
 * @str: a string
 * @i: an integer
 * @j: an integer
 * Return: 1 if palindrome, 0 if not.
 */
int pal_checker(char *str, int i, int j)
{
	if (str[i] == str[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(str, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if str is palindrome
 * @str: a string
 * Return: 1 if prime, 0 if not.
 */
int is_palindrome(char *str)
{
	return (pal_checker(str, 0, _strlen_recursion(str) - 1));
}
