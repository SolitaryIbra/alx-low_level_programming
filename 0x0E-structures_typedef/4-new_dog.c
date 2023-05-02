#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new obj
 * @name: a Pointer
 * @age: a Float
 * @owner: a Pointer
 * Return: a Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int x, y, z;
dog_t *obj;

if (name == NULL || owner == NULL)
return (NULL);
obj = malloc(sizeof(dog_t));
if (obj == NULL)
return (NULL);
for (x = 0; name[x]; x++)
;
x++;
obj->name = malloc(x * sizeof(char));
if (obj->name == NULL)
{
free(obj);
return (NULL);
}
for (z = 0; z < x; z++)
obj->name[z] = name[z];
obj->age = age;
for (y = 0; owner[y]; y++)
;
y++;
obj->owner = malloc(y * sizeof(char));
if (obj->owner == NULL)
{
free(obj->name);
free(obj);
return (NULL);
}
for (z = 0; z < y; z++)
obj->owner[z] = owner[z];
return (obj);
}