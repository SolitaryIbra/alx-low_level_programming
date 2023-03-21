#include "main.h"

/**
* _islower - This program checks if number is
* uppercase or lower case
* Return: 0 or 1
*/
int _islower(int c)
{
if (c > 97 && c < (97 + 26))
{
return (1);
}
else
{
return (0);
}
}
