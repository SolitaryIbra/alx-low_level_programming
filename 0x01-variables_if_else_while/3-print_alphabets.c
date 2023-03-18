
#include <stdio.h>
/**
* main - functio nto print the alphabet in lower case.
*
* Description: This function is only main to print the
* alpahabet in new line lower-cased
* Return: 0
*/
int main(void)
{
char alpahbet[26] = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
while (i < 26)
{
putchar(alpahbet[i]);
i++;
}
  
while (j < 26)
{
putchar(toupper(alpahbet[i]));
j++;
}
putchar('\n');
return (0);
}
