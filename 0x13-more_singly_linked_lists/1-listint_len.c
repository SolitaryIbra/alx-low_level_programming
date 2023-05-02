#include "lists.h"

/**
 * listint_len - abc
 *
 * @sum: abc
 *
 * Return: abc
 *
 */

size_t listint_len(const listint_t *sum)
{
	size_t count = 0;

	while (sum != NULL)
	{
	sum = sum->next;
		count++;
	}
	return (count);
}
