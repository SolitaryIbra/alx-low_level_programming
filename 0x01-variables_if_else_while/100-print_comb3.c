#include <stdio.h>

/**
* main - program returns the possable combinations
* Description: This program prints the required possable combination
* of numbers from 0 to 10 without repeating the same number
* Return: 0
*/
int main(void)
{

int i = 48;

while (i < 58)
{
int j = i + 1;

while (j < 58)
{
putchar(i);
putchar(j);

if (i != 56)
{
putchar(',');
putchar(' ');
}

j++;
}

i++;
j++;
}
putchar('\n');

return (0);
}
