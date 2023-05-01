#include "main.h"

/**
 * _strlen_recursion - length of str
 * @str: a string
 * @num: an integer
 * Return: num
 */
int _strlen_recursion(char *str)
{
	int num = 0;

	if (*str)
	{
		num++;
		num += _strlen_recursion(str + 1);

	}
	return (num);
}
