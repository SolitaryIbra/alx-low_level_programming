#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - abc
 * @elic: abc
 * @melic: abc
 * @selic: abc
 *
 * Return: abc
 */
const listint_t **_r(const listint_t **elic, size_t melic, const listint_t *selic)
{
	const listint_t **newlist;
	size_t sizei;

	newlist = malloc(melic * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(elic);
		exit(98);
	}
	for (sizei = 0; sizei < melic - 1; sizei++)
		newlist[sizei] = elic[sizei];
	newlist[sizei] = selic;
	free(elic);
	return (newlist);
}

/**
 * print_listint_safe - abc
 * @sum: abc
 *
 * Return: abc
 */
size_t print_listint_safe(const listint_t *sum)
{
	size_t sizei, nummer = 0;
	const listint_t **elic = NULL;

	while (sum != NULL)
	{
		for (sizei = 0; sizei < nummer; sizei++)
		{
			if (sum == elic[sizei])
			{
				printf("-> [%p] %d\n", (void *)sum, sum->n);
				free(elic);
				return (nummer);
			}
		}
		nummer++;
		elic = _r(elic, nummer, sum);
		printf("[%p] %d\n", (void *)sum, sum->n);
		sum = sum->next;
	}
	free(elic);
	return (nummer);
}
