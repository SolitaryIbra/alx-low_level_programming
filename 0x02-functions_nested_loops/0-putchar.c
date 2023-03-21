#include "main.h"

/**
* main - This code prints "_putcahr"
* Description: This code prints "_putchar" using
* printf() method
* Return: 0
*/
int main(void)
{
char text[12] = "_putchar";
int i;
while (text[i] != '\0')
{
putchar(text[i]);
i++;
}

return (0);
}
