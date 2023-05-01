#include "main.h"

/**
 * _print_rev_recursion - print str reverse
 * Return: 0;
*/
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
