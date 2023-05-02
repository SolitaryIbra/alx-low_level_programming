#ifndef DOG
#define DOG

/**
* struct dog - dog class
*
* @name: Dog Name
*
* @age: Dog Age
*
* @owner: Dog Owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog*, char*, float, char*);
void print_dog(struct dog*);

typedef struct dog dog_t;

dog_t *new_dog(char*, float, char*);

void free_dog(dog_t *d);

#endif
