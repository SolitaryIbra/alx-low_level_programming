#include "lists.h"
#include <stdio.h>

/**
 * print_listint - abc
 *
 * @sum: abc
 *
 * Return: abc
 *
 */
size_t print_listint(const listint_t *sum)
{
	size_t count = 0;

	while (sum != NULL)
	{
		printf("%d\n", sum->n);
		sum = sum->next;
		count++;
	}
	return (count);
}
