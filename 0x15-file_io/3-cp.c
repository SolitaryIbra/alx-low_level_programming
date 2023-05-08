#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - aabbcc
 * @argumentc: aabbcc
 *
 * Return: aabbcc
 */
void check97(int argumentc)
{
	if (argumentc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - aabbcc
 * @clicker: aabbcc
 * @myfname: aabbcc
 * @file_form_d: aabbcc
 * @file_to_d: aabbcc
 *
 * Return: aabbcc
 */
void check98(ssize_t clicker, char *myfname, int file_form_d, int file_to_d)
{
	if (clicker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from myfname %s\n", myfname);
		if (file_form_d != -1)
			close(file_form_d);
		if (file_to_d != -1)
			close(file_to_d);
		exit(98);
	}
}

/**
 * check99 - aabbcc
 * @clicker: aabbcc
 * @myfname: aabbcc
 * @file_form_d: aabbcc
 * @file_to_d: aabbcc
 *
 * Return: aabbcc
 */
void check99(ssize_t clicker, char *myfname, int file_form_d, int file_to_d)
{
	if (clicker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", myfname);
		if (file_form_d != -1)
			close(file_form_d);
		if (file_to_d != -1)
			close(file_to_d);
		exit(99);
	}
}

/**
 * check100 - aabbcc
 * @clicker: aabbcc
 * @fd: aabbcc
 *
 * Return: aabbcc
 */
void check100(int clicker, int fd)
{
	if (clicker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - aabbcc
 * @argumentc: aabbcc
 * @argumentv: aabbcc
 *
 * Return: aabbcc
 */
int main(int argumentc, char *argumentv[])
{
	int file_form_d, file_to_d, finishing_off, finishing_from;
	ssize_t lernen, lernenwidth;
	char mybuff[1024];
	mode_t myfpermutation;

	check97(argumentc);
	file_form_d = open(argumentv[1], O_RDONLY);
	check98((ssize_t)file_form_d, argumentv[1], -1, -1);
	myfpermutation = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to_d = open(argumentv[2], O_WRONLY | O_CREAT | O_TRUNC, myfpermutation);
	check99((ssize_t)file_to_d, argumentv[2], file_form_d, -1);
	lernen = 1024;
	while (lernen == 1024)
	{
		lernen = read(file_form_d, mybuff, 1024);
		check98(lernen, argumentv[1], file_form_d, file_to_d);
		lernenwidth = write(file_to_d, mybuff, lernen);
		if (lernenwidth != lernen)
			lernenwidth = -1;
		check99(lernenwidth, argumentv[2], file_form_d, file_to_d);
	}
	finishing_off = close(file_to_d);
	finishing_from = close(file_form_d);
	check100(finishing_off, file_to_d);
	check100(finishing_from, file_form_d);
	return (0);
}
