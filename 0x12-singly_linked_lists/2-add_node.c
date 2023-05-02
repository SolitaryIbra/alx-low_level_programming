#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - xyz
 * @str: xyz
 * Return: xyz
 */
int _strlen(const char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

/**
 * add_node - xyz
 * @obj: xyz
 * @str: xyz
 * Return: xyz
 */
list_t *add_node(list_t **obj, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *obj;
	*obj = add;

	return (add);
}
