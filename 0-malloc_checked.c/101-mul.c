#include "main.h"

/**
 * _print - output moving the string to the left by length
 * @strname: a string
 * @length: a string
 *
 * Return: void
 */
void _print(char *strname, int length)
{
	int num1, num2;

	num1 = num2 = 0;
	while (num1 < length)
	{
		if (strname[num1] != '0')
			num2 = 1;
		if (num2 || num1 == length - 1)
			_putchar(strname[num1]);
		num1++;
	}

	_putchar('\n');
	free(strname);
}

/**
 * mul - output a string and a char into a new location
 * @n: a char
 * @num: a string
 * @num_location: an integer
 * @destination: a char
 * @destination_location: an integer
 *
 * Return: a Pointer
 */
char *mul(char n, char *num, int num_location, char *destination, int destination_location)
{
	int num2, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (num2 = num_location, k = destination_location; num2 >= 0; num2--, k--)
	{
		mul = (n - '0') * (num[num2] - '0') + mulrem;
		mulrem = mul / 10;
		add = (destination[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		destination[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (destination[k] - '0') + addrem;
		addrem = add / 10;
		destination[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (destination);
}

/**
 * check_for_digits - output pseudo boolean
 * @argumentv: a Pointer
 *
 * Return: 0
 */
int check_for_digits(char **argumentv)
{
	int num1, num2;

	for (num1 = 1; num1 < 3; num1++)
	{
		for (num2 = 0; argumentv[num1][num2]; num2++)
		{
			if (argumentv[num1][num2] < '0' || argumentv[num1][num2] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - output a string
 * @strname: a string 
 * @length: an int
 *
 * Return: void
 */
void init(char *strname, int length)
{
	int num1;

	for (num1 = 0; num1 < length; num1++)
		strname[num1] = '0';
	strname[num1] = '\0';
}

/**
 * main - output multiply two numbers
 * @argc: args number
 * @argv: arg vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int length1, length2, lengthnum, ti, num1;
	char *a;
	char *t;
	char cation[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; cation[ti]; ti++)
			_putchar(cation[ti]);
		exit(98);
	}
	for (length1 = 0; argv[1][length1]; length1++)
		;
	for (length2 = 0; argv[2][length2]; length2++)
		;
	lengthnum = length1 + length2 + 1;
	a = malloc(lengthnum * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; cation[ti]; ti++)
			_putchar(cation[ti]);
		exit(98);
	}
	init(a, lengthnum - 1);
	for (ti = length2 - 1, num1 = 0; ti >= 0; ti--, num1++)
	{
		t = mul(argv[2][ti], argv[1], length1 - 1, a, (lengthnum - 2) - num1);
		if (t == NULL)
		{
			for (ti = 0; cation[ti]; ti++)
				_putchar(cation[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, lengthnum - 1);
	return (0);
}
