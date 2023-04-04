#include <stdio.h>

/**
* _memset - This function fills a speecific place in memory.
* Return: Of type pointer to another address.
*/
char* _memset(char* fill, char b, unsigned int lim)
{
	unsigned int num = 0;

	while (num < lim)
	{
	fill[num] = b;
	num++;
	}

	return (fill);
}
