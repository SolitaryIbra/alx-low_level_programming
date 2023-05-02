#include "main.h"
#include <stdlib.h>

/**
 * argstostr - output an argument concentrator
 * @argsc: args count
 * @argsv: args vec
 *
 * Return: a Pointer
 */
char *argstostr(int argsc, char **argsv)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (argsc == 0 || argsv == NULL)
		return (NULL);

	for (i = 0; i < argsc; i++)
	{
		s = argsv[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < argsc && j < len; i++)
	{
		s = argsv[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
