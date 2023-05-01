#include "main.h"

/**
 * check - checks the square root
 * @num1: an integer
 * @num2: an integer
 * Return: num
 */
int check(int num1, int num2)
{
	if (num1 * num1 == num2)
		return (num1);
	if (num1 * num1 > num2)
		return (-1);
	return (check(num1 + 1, num2));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: an integer
 * Return: natural square root or -1
 */
int _sqrt_recursion(int num)
{
	if (num == 0)
		return (0);
	return (check(1, num));
}
