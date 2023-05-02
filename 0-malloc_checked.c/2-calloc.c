#include "main.h"

/**
 * _calloc - output memory allocation from an array
 *
 * @allocarr: array memory allocator
 * @length: length to be allocated
 *
 * Return: a Pointer.
 */
void *_calloc(unsigned int allocarr, unsigned int length)
{
	char *a;
	unsigned int b;

	if (allocarr == 0 || length == 0)
		return (NULL);
	a = malloc(allocarr * length);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (allocarr * length); b++)
		a[b] = 0;
	return (a);
}
