#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main function: prints is positive if +ve, is negative if -ve, zero if 0
*
*
*
* returns Zero at termination
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
