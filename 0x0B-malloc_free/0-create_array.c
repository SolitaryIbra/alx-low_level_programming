#include "main.h"
#include <stdlib.h>

/**
 * create_array - output char arr
 * @length: array size
 * @character: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int length, char character)
{
	char *arr;
	unsigned int i;

	if (length == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * length);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		arr[i] = character;

	return (arr);
}