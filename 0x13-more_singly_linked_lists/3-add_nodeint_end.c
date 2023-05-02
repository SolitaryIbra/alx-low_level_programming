#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - abc
  *
  * @sum: abc
  * @num: abc
  * Return: abc
  */
listint_t *add_nodeint_end(listint_t **sum, const int num)
{
	listint_t *new;
	listint_t *temp;

	if (sum == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = NULL;
	if (*sum == NULL)
	{
	*sum = new;
		return (new);
	}
	temp = *sum;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
