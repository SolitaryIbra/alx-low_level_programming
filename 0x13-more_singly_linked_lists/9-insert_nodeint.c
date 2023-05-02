#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - abc
 * @sum: abc
 * @clore: abc
 * @limn: abc
 *
 * Return: abc
 */
listint_t *insert_nodeint_at_index(listint_t **sum, unsigned int clore, int limn)
{
	unsigned int zorax;
	listint_t *temp, *new;

	if (sum == NULL)
		return (NULL);
	if (clore != 0)
	{
		temp = *sum;
		for (zorax = 0; zorax < clore - 1 && temp != NULL; zorax++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = limn;
	if (clore == 0)
	{
		new->next = *sum;
		*sum = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
