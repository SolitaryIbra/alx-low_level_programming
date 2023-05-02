#include<stdio.h>

/**
 * myStartupFun - xyz
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - xyz
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
