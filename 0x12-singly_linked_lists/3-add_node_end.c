#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - xyz
 * @str: xyz
 *
 * Return: xyz
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - xyz
 * @sum: xyz
 * @str: xyz
 *
 * Return: xyz
 */
list_t *add_node_end(list_t **sum, const char *str)
{
	list_t *obj1, *obj2;

	if (str == NULL)
		return (NULL);
	obj1 = malloc(sizeof(list_t));
	if (obj1 == NULL)
		return (NULL);
	obj1->str = strdup(str);
	if (obj1->str == NULL)
	{
		free(obj1);
		return (NULL);
	}
	obj1->len = _strlen(obj1->str);
	obj1->next = NULL;
	if (*sum == NULL)
	{
		*sum = obj1;
		return (obj1);
	}
	obj2 = *sum;
	while (obj2->next)
		obj2 = obj2->next;
	obj2->next = obj1;
	return (obj1);
}
