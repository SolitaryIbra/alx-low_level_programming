#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - xyz
 * @obj: xyz
 * Return: xyz
 */
size_t print_list(const list_t *obj)
{
	int lim = 0;

	while (obj)
	{
		if (obj->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", obj->len, obj->str);
		}
		lim++;
		obj = obj->next;
	}
	return (lim);
}
