#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet sorted 10 times
*/
void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
int i = 97;
while (i < (97 + 26))
{
putchar(i);
i++;
}
putchar('\n');
j++;
}
}
