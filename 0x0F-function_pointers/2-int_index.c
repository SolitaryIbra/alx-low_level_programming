#include "function_pointers.h"

/**
 * int_index - output the number index
 * @arr: an array
 * @length: an int
 * @init: an initialization
 *
 * Return: 0
 */
int int_index(int *arr, int length, int (*init)(int))
{
int i = 0;

if (length > 0)
{
if (arr != NULL && init != NULL)
{
while (i < length)
{
if (init(arr[i]))
return (i);

i++;
}
}
}

return (-1);
}