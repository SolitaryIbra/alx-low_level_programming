#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - abc
  *
  * @num: abc
  * @sum: abc
  * Return: abc
  */
listint_t *add_nodeint(listint_t **num, const int sum)
{
	listint_t *ptr;

	if (num == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = sum;
	ptr->next = *num;
	*num = ptr;
	return (ptr);
}
