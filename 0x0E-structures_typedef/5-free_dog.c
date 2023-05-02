#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - output alloc struct
 * @obj: a Pointer
 * Return: void
 */
void free_dog(dog_t *obj)
{
if (obj)
{
free(obj->name);
free(obj->owner);
free(obj);
}
}