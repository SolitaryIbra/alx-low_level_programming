#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - abc
 * @string: abc
 *
 * Return: abc
 */
int (*get_op_func(char *string))(int, int)
{
op_t oper1[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
int i = 0;

while (i < 5)
{
if (strcmp(string, oper1[i].oper) == 0)
return (oper1[i].func);

i++;
}

return (0);
}
