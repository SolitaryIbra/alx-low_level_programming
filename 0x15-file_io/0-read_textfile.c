#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - aabbcc
 * @fname: aabbcc
 * @numchar: aabbcc
 *
 * Return: aabbcc
 */
ssize_t read_textfile(const char *fname, size_t numchar)
{
	ssize_t offen, lesen, schreiben;
	char *mybuff;

	if (fname == NULL)
		return (0);

	mybuff = malloc(sizeof(char) * numchar);
	if (mybuff == NULL)
		return (0);

	offen = open(fname, O_RDONLY);
	lesen = read(offen, mybuff, numchar);
	schreiben = write(STDOUT_FILENO, mybuff, lesen);

	if (offen == -1 || lesen == -1 || schreiben == -1 || schreiben != lesen)
	{
		free(mybuff);
		return (0);
	}

	free(mybuff);
	close(offen);

	return (schreiben);
}
