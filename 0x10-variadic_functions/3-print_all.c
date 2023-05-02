#include "variadic_functions.h"

/**
 * print_all - output args
 * @form: specifies the necessary operations
 * Return: Void
 */

void print_all(const char * const form, ...)
{
int num;
int breaker;
char *str;
va_list vue_vector;

va_start(vue_vector, form);
num = 0;
while (form != NULL && form[num] != '\0')
{
switch (form[num])
{
case 'c':
printf("%c", va_arg(vue_vector, int));
breaker = 0;
break;
case 'i':
printf("%i", va_arg(vue_vector, int));
breaker = 0;
break;
case 'f':
printf("%f", va_arg(vue_vector, double));
breaker = 0;
break;
case 's':
str = va_arg(vue_vector, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
breaker = 0;
break;
default:
breaker = 1;
break;
}
if (form[num + 1] != '\0' && breaker == 0)
printf(", ");
num++;
}
printf("\n");
va_end(vue_vector);
}
