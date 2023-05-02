#include "main.h"

/**
 * string_nconcat - output concatinate two strings.
 *
 * @character1: first char
 * @character2: secound char
 * @num: unsigned int
 *
 * Return: NULL
 */
char *string_nconcat(char *character1, char *character2, unsigned int num)
{
	unsigned int length, width, height;
	char *s;

	if (character1 == NULL)
	{
		length = 0;
	}
	else
	{
		for (length = 0; character1[length]; ++length)
		;
	}
	if (character2 == NULL)
	{
		width = 0;
	}
	else
	{
		for (width = 0; character2[width]; ++width)
		;
	}
	if (width > num)
		width = num;
	s = malloc(sizeof(char) * (length + width + 1));
	if (s == NULL)
		return (NULL);
	for (height = 0; height < length; height++)
		s[height] = character1[height];
	for (height = 0; height < width; height++)
		s[height + length] = character2[height];
	s[length + width] = '\0';
	return (s);
}

