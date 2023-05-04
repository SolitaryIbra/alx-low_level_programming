#include "main.h"

/**
 * set_bit - aabbcc
 * @myintidx: aabbcc
 * @myintn: aabbcc
 * Return: aabbcc
 */
int set_bit(unsigned long int *myintn, unsigned int myintidx)
{
	unsigned long int myinti;

	if (myintidx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	myinti = 1 << myintidx;
	*myintn = *myintn | myinti;

	return (1);
}
