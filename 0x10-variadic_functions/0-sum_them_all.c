#include "variadic_functions.h"

/**
 * sum_them_all - output sumofnum all nums
 * @nums: the number of parameters passed
 * Return: 0
 */

int sum_them_all(const unsigned int nums, ...)
{
int sumofnum;
unsigned int num;
va_list ap;

va_start(ap, nums);

if (nums == 0)
return (0);

for (num = 0; num < nums; num++)
sumofnum += va_arg(ap, int);

va_end(ap);

return (sumofnum);
}
