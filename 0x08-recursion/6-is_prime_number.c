
#include "main.h"

/**
 * check - checks if num is prime
 * Return: num
 */
int check(int num1, int num2)
{
	if (num2 < 2 || num2 % num1 == 0)
		return (0);
	else if (num1 > num2 / 2)
		return (1);
	else
		return (check(num1 + 1, num2));
}

/**
 * is_prime_number - states if number is prime
 * Return: num
 */
int is_prime_number(int num)
{
	if (num == 2)
		return (1);
	return (check(2, num));
}
