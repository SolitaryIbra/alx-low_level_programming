#include "main.h"

/**
 * clear_bit - aabbcc
 * @myintn: aabbcc
 * @myintidx: aabbcc
 * Return: aabbcc
 */

int clear_bit(unsigned long int *myintn, unsigned int myintidx)
{
	unsigned long int myinti;

	if (myintidx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	myinti = ~(1 << myintidx);
	*myintn = *myintn & myinti;

	return (1);
}
