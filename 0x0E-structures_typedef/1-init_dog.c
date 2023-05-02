#include "dog.h"

/**
 * init_dog - struct dog
 * @obj: a Pointer
 * @name: a Pointer
 * @age: a Float
 * @owner: a Pointer
 * Return: void
 */
void init_dog(struct dog *obj, char *name, float age, char *owner)
{
	if (obj)
	{
		obj->name = name;
		obj->age = age;
		obj->owner = owner;
	}
}
