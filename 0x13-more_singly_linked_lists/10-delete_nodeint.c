#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - abc
 * @sum: abc
 * @idx: abc
 *
 * Return: abc
 */
int delete_nodeint_at_index(listint_t **sum, unsigned int idx)
{
	unsigned int lim;
	listint_t *temp, *next;

	if (sum == NULL || *sum == NULL)
		return (-1);
	if (idx == 0)
	{
		next = (*sum)->next;
		free(*sum);
		*sum = next;
		return (1);
	}
	temp = *sum;
	for (lim = 0; lim < idx - 1; lim++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);

}
