#include "variadic_functions.h"

/**
 * print_strings - output a strsep
 * @sepa: a string
 * @num: an integer
 * Return: 0
 */

void print_strings(const char *sepa, const unsigned int num, ...)
{
char *strsep;
unsigned int i;
va_list aparter;

va_start(aparter, num);
if (sepa == NULL)
sepa = "";

for (i = 0; i < num; i++)
{
strsep = va_arg(aparter, char*);
if (strsep == NULL)
strsep = "(nil)";
printf("%s", strsep);
if (i < num - 1)
printf("%s", sepa);
}
printf("\n");
va_end(aparter);
}
