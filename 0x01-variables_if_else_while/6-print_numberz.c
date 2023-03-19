#include <stdio.h>

/**
* main - This code prints the numbers in base 10
*
* Description: This code prints the sorted numeric numbers
* Return: 0
*/
int main(void)
{

int i = 0;
int ch = 48;
while (i < 10)
{
putchar(ch+i);
i++;
}
putchar('\n');
return (0);
}
