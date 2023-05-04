#include "main.h"

/**
 * get_bit - aabbcc
 * @myintn: aabbcc
 * @myidx: aabbcc
 *
 * Return: aabbcc
 */
int get_bit(unsigned long int myintn, unsigned int myidx)
{
	unsigned long int myintoper, myintexcess;

	if (myidx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	myintoper = 1 << myidx;
	myintexcess = myintn & myintoper;
	if (myintexcess == myintoper)
		return (1);

	return (0);
}
