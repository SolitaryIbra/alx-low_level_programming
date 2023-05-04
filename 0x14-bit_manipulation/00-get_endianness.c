#include "main.h"
/**
 * get_endianness - aabbcc
 *
 * Return: aabbcc
 */
int get_endianness(void)
{
	int myinti;
	char *mycharc;

	myinti = 1;
	mycharc = (char *)&myinti;

	return (*mycharc);
}
