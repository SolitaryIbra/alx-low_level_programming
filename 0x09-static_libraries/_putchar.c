#include <unistd.h>

/**
 *
 * _putchar - output a character
 * @character: a character
 * Return: 1.
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
