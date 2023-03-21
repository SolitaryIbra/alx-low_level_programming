#include "main.h"

/*
* print_alphabet_x10 - prints the alphabet sorted 10 times
*/
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (int i = 'a'; i < 'z' + 1; i++)
{
putchar(i);
}
putchar('\n');
} 
}
