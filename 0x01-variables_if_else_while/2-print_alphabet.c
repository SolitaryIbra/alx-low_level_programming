#include <stdio.h>
/**
 * main - functio nto print the alphabet in lower case.
 * 
 * Description: This function is only main to print the 
 * alpahabet in new line lower-cased
 * Return: 0
*/
int main(void){
    char alpahbet[26] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i<26; i++){
        putchar(alpahbet[i]);
        putchar('\n');
    }
    return (0);
}
