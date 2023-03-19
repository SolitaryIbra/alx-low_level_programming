#include <stdio.h>

/**
* main - This code prints the alphabet in 
* lower case except e and q letters
*
* Description: This code prints the sorted alphabet
* except the letters e and q
* Return: 0
*/
int main(void){

int ch = 97;
int i = 0;

while (i < 26)
{
if(i != 4 && i != 16){
putchar(ch);
}
ch++;
i++;
}

return (0);
}
