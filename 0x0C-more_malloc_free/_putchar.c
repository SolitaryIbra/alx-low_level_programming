#include <unistd.h>

/**
 * _putchar - output a character
 * @character: a character
 *
 * Return: an integer.
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
