#include "main.h"

/**
 * _puts_recursion - print str
 * @str: a string
 * Return: void
 */
void _puts_recursion(char *str)
{
if (*str)
{
	_putchar(*str);
	_puts_recursion(str + 1);
}
else
{
	_putchar('\n');
}

}
