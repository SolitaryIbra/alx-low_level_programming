#include <unistd.h>

/**
 *
 * _putchar - print a character to stdout
 * @character: a character
 * Return: 1.
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
