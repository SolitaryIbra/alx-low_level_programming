#include <stdio.h>

/**
* main - This code prints the numbers in sorted order
*
* Description: This code prints the numbers in sorted order
* with a comma separating each number
* Return: 0
*/
int main(void)
{

int ch_0 = 48;
int i = 0;
while (i < 10)
{
putchar(ch_0 + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}

return (0);
}
