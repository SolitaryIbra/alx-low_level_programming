#include "main.h"

/**
 * _pow_recursion - power
 * Return: num
 */
int _pow_recursion(int num1, int num2)
{
	if (num1 < 0)
	{
		return (-1);
	}
	else if (num2 != 0)
		return (num1 * _pow_recursion(num1, num2 - 1));

	else
	{
		return (1);
	}
}