#include "main.h"

/**
* _memcpy - This function copies number of bytes from memory pointer
* to memory of another pointer.
*
* Return: Of type pointer to another pointer
*/
char* _memcpy(char* to_ptr, char* from_ptr, unsigned int n)
{
unsigned int num = 0;

while (num < n)
{
to_ptr[num] = from_ptr[num];
num++;
}

return (to_ptr);
}
