#include "dog.h"

/**
* init_dog - Initializes a struct dog with given name, age, and owner.
* @obj: Pointer to the struct dog to initialize.
* @name: Pointer to the name string.
* @age: Age of the dog.
* @owner: Pointer to the owner string.
*
* Return: Void.
*/
void init_dog(struct dog *obj, char *name, float age, char *owner)
{
if (obj != NULL)
{
obj->name = name;
obj->age = age;
obj->owner = owner;
}
}
