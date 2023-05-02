#include "lists.h"

/**
 * get_nodeint_at_index - abc
 * @sum: abc
 * @num: abc
 *
 * Return: abc
 */
listint_t *get_nodeint_at_index(listint_t *sum, unsigned int num)
{
	unsigned int lim;

	if (sum == NULL)
		return (NULL);
	for (lim = 0; lim < num; lim++)
	{
		sum = sum->next;
		if (sum == NULL)
			return (NULL);
	}
	return (sum);
}
