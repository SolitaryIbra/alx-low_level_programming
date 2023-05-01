#include "main.h"

/**
 * factorial - factorial of num
 * @num: an integer
 * Return: num
 */
int factorial(int num)
{
	int fac;
	if (num == 0)
	{
		return (1);
	}
	else if (num < 0)
	{
		return (-1);
	}
	else
	{
		fac = num * factorial(num - 1);
	}
			return (fac);
}
