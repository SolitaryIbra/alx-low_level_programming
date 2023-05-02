#include "main.h"
#include <stdlib.h>

/**
 * _strdup - output a pointer to a parameter
 * @strname: a string
 *
 * Return: a Pointer.
 */
char *_strdup(char *strname)
{
	char *copy;
	int i, len = 0;

	if (strname == NULL)
		return (NULL);

	while (strname[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = strname[i];
	copy[len] = '\0';

	return (copy);
}
