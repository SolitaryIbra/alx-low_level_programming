#include "function_pointers.h"

/**
 * array_iterator - output a function parameter define
 *
 * @arr: an array
 * @length: an integer
 * @occure: a Pointer
 *
 * Return: Void
 */
void array_iterator(int *arr, size_t length, void (*occure)(int))
{
size_t i;

if (arr && occure)
{
i = 0;
while (i < length)
{
occure(arr[i]);
i++;
}
}
}