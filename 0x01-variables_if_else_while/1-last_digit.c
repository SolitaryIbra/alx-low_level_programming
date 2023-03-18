#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - function extracts the last number in an integer and checks if greater than 5 or else smaller or equal to 0
*
* Description: In main function checks the value of the last nummebr by moduling 
* the initial number and checks if it is greater than the current number
* Return = 0
*
*/

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
double last_num = n % 10;
printf("Last digit of %d is %lf ",n ,last_num);
if (last_num > 5)
{
	printf("and is greater than 5\n");
}
else if (last_num < 5)
{
	printf("and is less than 6 and not 0\n");
}
else if (last_num == 0)
{
	printf("and is 0\n");
}
return (0);
}
