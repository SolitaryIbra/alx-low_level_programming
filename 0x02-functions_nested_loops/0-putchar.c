#include "main.h"

/**
* main - This code prints "_putcahr"
* Description: This code prints "_putchar" using
* printf() method
* Return: 0
*/
int main(void)
{
char text[8] = "_putchar";
int i;
while (i < 8)
{
putchar(text[i]);
i++;
}
putchar('\n');

return (0);
}
