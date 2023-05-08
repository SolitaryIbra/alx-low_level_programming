#include "main.h"
/**
 * create_file - aabbcc
 *
 * @cont_val: aabbcc
 * @fname: aabbcc
 *
 * Return: aabbcc
 */
int create_file(const char *fname, char *cont_val)
{
	int o, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (cont_val != NULL)
	{
		for (len = 0; cont_val[len];)
			len++;
	}

	o = open(fname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, cont_val, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
