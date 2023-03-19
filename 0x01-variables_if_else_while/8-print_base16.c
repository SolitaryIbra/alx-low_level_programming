#include <stdio.h>

/**
* main - This code prints the numbers in hexadecimal form
*
* Description: This code prints the numbers in hexadecimal base
* Return: 0
*/
int main(void)
{

int i = 0;
int ch_a = 97;
int ch_0 = 48;

while (i < 10)
{
putchar(ch_0 + i);
i++;
}

i = 0;

while (i < 6)
{
putchar(ch_a + i);
i++;
}

putchar('\n');

return (0);
}
