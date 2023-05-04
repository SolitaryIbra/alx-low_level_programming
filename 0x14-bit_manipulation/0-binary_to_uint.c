#include "main.h"

/**
 * binary_to_uint - aabbcc
 * @inary: aabbcc
 *
 * Return: aabbcc
 */
unsigned int binary_to_uint(const char *inary)
{
	int myinti;
	unsigned int myintj;

	myintj = 0;
	if (!inary)
		return (0);
	for (myinti = 0; inary[myinti] != '\0'; myinti++)
	{
		if (inary[myinti] != '0' && inary[myinti] != '1')
			return (0);
	}
	for (myinti = 0; inary[myinti] != '\0'; myinti++)
	{
		myintj <<= 1;
		if (inary[myinti] == '1')
			myintj += 1;
	}
	return (myintj);
}
