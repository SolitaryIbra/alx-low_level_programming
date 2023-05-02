#include <stdio.h>
#include "dog.h"

/**
* print_dog - output a struct dog
* @obj: a Pointer
*
* Return: void
*/
void print_dog(struct dog *obj)
{
if (obj != NULL)
{
if (obj->name != NULL)
printf("Name: %s\n", obj->name);
else
printf("Name: (nil)\n");
printf("Age: %.6f\n", obj->age);
if (obj->owner != NULL)
printf("Owner: %s\n", obj->owner);
else
printf("Owner: (nil)\n");
}
}
