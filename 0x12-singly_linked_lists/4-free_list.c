#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - xyz
 *
 * @obj: xyz
 */
void free_list(list_t *obj)
{
	if (obj)
	{
		free_list(obj->next);
		if (obj->str)
			free(obj->str);
		free(obj);
	}
}
