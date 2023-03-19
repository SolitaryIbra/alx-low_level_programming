#include <stdio.h>

/**
* main - This code prints the alphabets in reverse order
*
* Description: This code prints the reverse-sorted alphabets
* in reverse order
* Return: 0
*/
int main(void)
{

int i = 0;
int ch_z = 97 + 25;
while (i < 26)
{
putchar(ch_z - i);
i++;
}
putchar('\n');
return (0);
}
