#include "main.h"

/**
 * malloc_checked - terminate at 98
 *
 * @build: memory allocated
 *
 * Return: a Pointer
 */
void *malloc_checked(unsigned int build)
{
	void *i;

	i = malloc(build);
	if (i == NULL)
		exit(98);
	return (i);

}
