#include "main.h"
/**
 * flip_bits - aabbcc
 * @myintn: aabbcc
 * @myintm: aabbcc
 * Return: aabbcc
 */
unsigned int flip_bits(unsigned long int myintn, unsigned long int myintm)
{
	unsigned long int myintres, myintres;
	unsigned int myintj, myinti;

	myintj = 0;
	myintres = 1;
	myintres = myintn ^ myintm;
	for (myinti = 0; myinti < (sizeof(unsigned long int) * 8); myinti++)
	{
		if (myintres == (myintres & myintres))
			myintj++;
		myintres <<= 1;
	}

	return (myintj);
}
