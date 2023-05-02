#include "main.h"

/**
* _realloc - output memory relocation
*
* @ptr_allocated: a Pointerr
* @intit_size: an integer to a size
* @end_size: an integer to a size
*
* Return: a Pointer
*/
void *_realloc(void *ptr_allocated,
unsigned int intit_size,
unsigned int end_size)
{
char *character;
unsigned int i, n = end_size;
char *oldp = ptr_allocated;

if (ptr_allocated == NULL)
{
character = malloc(end_size);
return (character);
}
else if (end_size == 0)
{
free(ptr_allocated);
return (NULL);
}
else if (end_size == intit_size)
return (ptr_allocated);
character = malloc(end_size);
if (character == NULL)
return (NULL);
if (end_size > intit_size)
n = intit_size;
for (i = 0; i < n; i++)
character[i] = oldp[i];
free(ptr_allocated);
return (character);
}
