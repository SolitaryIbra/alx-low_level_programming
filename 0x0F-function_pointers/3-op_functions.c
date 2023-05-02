#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - abc
* @indexa: abc
* @indexb: abc
*
* Return: abc
*/
int op_add(int indexa, int indexb)
{
return (indexa + indexb);
}

/**
* op_sub - abc
* @indexa: abc
* @indexb: abc
*
* Return: abc
*/
int op_sub(int indexa, int indexb)
{
return (indexa - indexb);
}

/**
* op_mul - abc
* @indexa: abc
* @indexb: abc
*
* Return: abc
*/
int op_mul(int indexa, int indexb)
{
return (indexa * indexb);
}

/**
* op_div - abc
* @indexa: abc
* @indexb: abc
*
* Return: abc
*/
int op_div(int indexa, int indexb)
{
if (indexb == 0)
{
printf("Error\n");
exit(100);
}

return (indexa / indexb);
}

/**
* op_mod - abc
* @indexa: abc
* @indexb: abc
*
* Return: abc
*/
int op_mod(int indexa, int indexb)
{
if (indexb == 0)
{
printf("Error\n");
exit(100);
}

return (indexa % indexb);
}