#include "lists.h"

/**
 * sum_listint - abc
 * @sum: abc
 *
 * Return: abc
 */
int sum_listint(listint_t *sum)
{
	int sum = 0;

	while (sum != NULL)
	{
		sum += sum->n;
		sum = sum->next;
	}
	return (sum);
}
