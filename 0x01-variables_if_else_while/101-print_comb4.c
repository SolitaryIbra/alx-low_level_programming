#include <stdio.h>

/**
* main - This program Prints the combination of all numbers in three
* Description: This is how to print thhree numbers in a consecuative
* order without doing that again in different order
* Return: 0
*/
int main(void)
{
int i = 48;
int j, k;
while (i < 58)
{
j = i + 1;

while (j < 58)
{
k = j + 1;

while (k < 58)
{
putchar(i);
putchar(j);
putchar(k);
if (k != 58)
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
}

i++;
}
  putchar('\n');
return (0);
}
