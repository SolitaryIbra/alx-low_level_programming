#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - abc
 * @sum: abc
 * @indexing: abc
 * @num: abc
 *
 * Return: abc
 */
listint_t *insert_nodeint_at_index(listint_t **sum, unsigned int indexing, int num)
{
	unsigned int lim;
	listint_t *late, *valeo;

	if (sum == NULL)
		return (NULL);
	if (indexing != 0)
	{
		late = *sum;
		for (lim = 0; lim < indexing - 1 && late != NULL; lim++)
		{
			late = late->next;
		}
		if (late == NULL)
			return (NULL);
	}
	valeo = malloc(sizeof(listint_t));
	if (valeo == NULL)
		return (NULL);
	valeo->n = num;
	if (indexing == 0)
	{
		valeo->next = *sum;
		*sum = valeo;
		return (valeo);
	}
	valeo->next = late->next;
	late->next = valeo;
	return (valeo);
}
