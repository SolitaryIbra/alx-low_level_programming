#include "main.h"

/**
 * _strlen - aabbcc
 * @mystring: aabbcc
 *
 * Return: aabbcc
 */
size_t _strlen(char *mystring)
{
	size_t myinti;

	for (myinti = 0; mystring[myinti]; myinti++)
		;
	return (myinti);
}

/**
 * append_text_to_file - aabbcc
 * @fname: aabbcc
 * @cont_val: aabbcc
 *
 * Return: aabbcc
 */
int append_text_to_file(const char *fname, char *cont_val)
{
	int filedim;
	ssize_t length;

	if (fname == NULL)
		return (-1);
	filedim = open(fname, O_WRONLY | O_APPEND);
	if (filedim == -1)
		return (-1);
	if (cont_val != NULL)
		length = write(filedim, cont_val, _strlen(cont_val));
	close(filedim);
	if (length == -1)
		return (-1);
	return (1);
}
