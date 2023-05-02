#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - xyz
 * @obj: xyz
 * Return: xyz
 */
size_t list_len(const list_t *obj)
{
	int lim = 0;

	while (obj)
	{
		lim++;
		obj = obj->next;
	}
	return (lim);
}
