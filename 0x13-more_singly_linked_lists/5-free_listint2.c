#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - abc
 * @sum: abc
 *
 * Return: abc
 */

void free_listint2(listint_t **sum)
{
	listint_t *next;

	if (sum == NULL)
		return;
	while (*sum != NULL)
	{
		next = (*sum)->next;
		free(*sum);
		*sum = next;
	}
}

