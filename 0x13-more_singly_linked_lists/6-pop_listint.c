#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - abc
 * @sum: abc
 *
 *Return: abc
 */
int pop_listint(listint_t **sum)
{
	listint_t *start;
	int num;

	if (sum == NULL || *sum == NULL)
		return (0);
	start = *sum;
	*sum = start->next;
	num = start->n;
	free(start);
	return (num);
}

