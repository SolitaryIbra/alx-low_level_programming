#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two str.
 * @str1: a string
 * @str2: a string
 *
 * Return: a Pointer
 */
char *str_concat(char *str1, char *str2)
{
	int i, j, length1, length2, len;
	char *total;

	length1 = length2 = 0;

	if (str1 != NULL)
	{
		i = 0;
		while (str1[i++] != '\0')
			length1++;
	}

	if (str2 != NULL)
	{
		i = 0;
		while (str2[i++] != '\0')
			length2++;
	}

	len = length1 + length2;
	total = (char *)malloc(sizeof(char) * (len + 1));
	if (total == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		total[i] = str1[i];
	for (j = 0; j < length2; j++, i++)
		total[i] = str2[j];
	total[len] = '\0';

	return (total);
}
