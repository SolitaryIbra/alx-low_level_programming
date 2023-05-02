#include "lists.h"

/**
 * reverse_listint - abc
 * @sum: abc
 *
 * Return: abc
 */
listint_t *reverse_listint(listint_t **sum)
{
	listint_t *previous, *next;

	if (sum == NULL || *sum == NULL)
		return (NULL);
	if ((*sum)->next == NULL)
		return (*sum);
	previous = NULL;
	while (*sum != NULL)
	{
		next = (*sum)->next;
		(*sum)->next = previous;
		previous = *sum;
		*sum = next;
	}
	*sum = previous;
	return (*sum);
}

