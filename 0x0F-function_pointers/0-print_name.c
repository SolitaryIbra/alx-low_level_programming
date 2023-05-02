#include "function_pointers.h"

/**
 * print_name - output identity.
 * @identity: a Pointer
 * @func: a Function
 *
 * Return: Void
 */
void print_name(char *identity, void (*func)(char *))
{
if (identity != NULL && func != NULL)

func(identity);

}
