#include "main.h"
/**
 * _power - aabbcc
 * @myguitar: aabbcc
 * @mypower: aabbcc
 * Return: aabbcc
 */
unsigned long int _power(unsigned int myguitar, unsigned int mypower)
{
	unsigned long int mynum;
	unsigned int myinti;

	mynum = 1;
	for (myinti = 1; myinti <= mypower; myinti++)
		mynum *= myguitar;
	return (mynum);
}

/**
 * print_binary - aabbcc
 * @myintn: aabbcc
 * Return: aabbcc
 */
void print_binary(unsigned long int myintn)
{
	unsigned long int myintoper, myintfinal;
	char clicker;

	clicker = 0;
	myintoper = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (myintoper != 0)
	{
		myintfinal = myintn & myintoper;
		if (myintfinal == myintoper)
		{
			clicker = 1;
			_putchar('1');

		}
		else if (clicker == 1 || myintoper == 1)
		{
			_putchar('0');
		}
		myintoper >>= 1;
	}
}
