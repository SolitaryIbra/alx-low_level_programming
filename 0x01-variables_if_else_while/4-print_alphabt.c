#include <stdio.h>

/**
*
* main - This code prints the alphabet in 
* lower case except e and q letters
*
* Description: This code prints the sorted alphabet
* except the letters e and q
* Return: 0
*
*/
int main(void)
{
  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
  int i;
  while (i < 26)
  {
    if (alphabet[i] == 'e' || alphabet[i] == 'q')
    {
    putchar(alphabet[i]);
    }
  }
}
