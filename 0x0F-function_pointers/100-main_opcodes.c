#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @indexa: address of the main function
 * @indexb: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *indexa, int indexb)
{
	int i;

	for (i = 0; i < indexb; i++)
	{
		printf("%.2hhx", indexa[i]);
		if (i < indexb - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int indexb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	indexb = atoi(argv[1]);
	if (indexb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, indexb);
	return (0);
}
