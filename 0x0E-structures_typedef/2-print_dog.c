#include <stdio.h>
#include "dog.h"

/**
 * print_dog - output a struct dog
 * @obj: a Pointer
 * Return: void
 */
void print_dog(struct dog *obj)
{
	if (obj != NULL)
	{
		if (obj->name != NULL)
			printf("The dog name is: %s\n", obj->name);
		else
			printf("The dog name is: (nil)\n");
		printf("The dog age is: %.6f\n", obj->age);
		if (obj->owner != NULL)
			printf("The dog owner is: %s\n", obj->owner);
		else
			printf("The dog owner is: (nil)\n");
	}
}
