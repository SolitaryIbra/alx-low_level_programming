#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - abc
 *
 * @sum: abc
 *
 * Return: abc
 */

void free_listint(listint_t *sum)
{
	listint_t *next;

	while (sum != NULL)
	{
		next = sum->next;
		free(sum);
		sum = next;
	}
}
