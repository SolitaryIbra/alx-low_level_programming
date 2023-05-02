#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - abc
 * @indxity: abc
 * @gros: abc
 * @bellig: abc
 * Return: abc
 */
listint_t **_ra(listint_t **indxity, size_t gros, listint_t *bellig)
{
	listint_t **newlist;
	size_t nummeri;

	newlist = malloc(gros * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(indxity);
		exit(98);
	}
	for (nummeri = 0; nummeri < gros - 1; nummeri++)
		newlist[nummeri] = indxity[nummeri];
	newlist[nummeri] = bellig;
	free(indxity);
	return (newlist);
}

/**
 * free_listint_safe - abc
 * @sum: abc
 *
 * Return: abc
 */
size_t free_listint_safe(listint_t **sum)
{
	size_t nummeri, num = 0;
	listint_t **indxity = NULL;
	listint_t *next;

	if (sum == NULL || *sum == NULL)
		return (num);
	while (*sum != NULL)
	{
		for (nummeri = 0; nummeri < num; nummeri++)
		{
			if (*sum == indxity[nummeri])
			{
				*sum = NULL;
				free(indxity);
				return (num);
			}
		}
		num++;
		indxity = _ra(indxity, num, *sum);
		next = (*sum)->next;
		free(*sum);
		*sum = next;
	}
	free(indxity);
	return (num);
}
