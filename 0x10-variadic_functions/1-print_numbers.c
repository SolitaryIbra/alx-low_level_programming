#include "variadic_functions.h"

/**
 * print_numbers - output nums
 * @numparameter: an integer
 * @sep: a Pointer
 * Return: 0
 */

void print_numbers(const char *sep, const unsigned int numparameter, ...)
{
unsigned int num;
va_list ap;

va_start(ap, numparameter);

if (sep == NULL)
sep = "";

for (num = 0; num < numparameter; num++)
{
printf("%d", va_arg(ap, int));
if (num < numparameter - 1)
printf("%s", sep);
}
printf("\n");
va_end(ap);
}
