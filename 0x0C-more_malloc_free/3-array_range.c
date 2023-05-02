#include <stdlib.h>
#include "main.h"

/**
* *array_range - output an array of integers
* @begin: the range where value would begin from
* @end: the range where value would end at
*
* Return: pointer to the new array
*/
int* array_range(int begin, int end)
{
int *ptr_to_int;
int num, length;

if (begin > end)
return (NULL);

length = end - begin + 1;

ptr_to_int = malloc(sizeof(int) * length);

if (ptr_to_int == NULL)
return (NULL);

for (num = 0; begin <= end; num++)
ptr_to_int[num] = begin++;

return (ptr_to_int);
}
