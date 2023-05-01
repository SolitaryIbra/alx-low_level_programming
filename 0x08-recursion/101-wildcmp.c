#include "main.h"

/**
 * str_checker - checks identical two strings.
 * @str1: a string
 * @str2: a string
 * @i: an integer
 * @j: an integer
 * Return: 1 if palindrome, 0 if not.
 */
int str_checker(char *str1, char *str2, int i, int j)
{
if (str1[i] == '\0' && str2[j] == '\0')
return (1);
if (str1[i] == str2[j])
return (str_checker(str1, str2, i + 1, j + 1));
if (str1[i] == '\0' && str2[j] == '*')
return (str_checker(str1, str2, i, j + 1));
if (str2[j] == '*')
return (str_checker(str1, str2, i + 1, j) || str_checker(str1, str2, i, j + 1));
return (0);
}

/**
 * wildcmp - check if identical strings
 * @str1: a string
 * @str2: a string
 * Return: 1 if are considered identical.
 */
int wildcmp(char *str1, char *str2)
{
	return (str_checker(str1, str2, 0, 0));
}
