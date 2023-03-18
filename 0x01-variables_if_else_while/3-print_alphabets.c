#include <stdio.h>
/**
* main - functio nto print the alphabet in lower case.
*
* Description: This function is only main to print the
* alpahabet in new line lower-cased and upper-cased
* Return: 0
*/
int main(void)
{

int ch = 97;
while (ch < (97+26))
{
putchar(ch);
ch++;
}

ch = 65;

while (ch < (65+26))
{
putchar(ch);
ch++;
}

return (0);
}
