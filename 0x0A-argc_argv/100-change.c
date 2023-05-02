#include <stdio.h>
#include <stdlib.h>

/**
 * main - output min num for change
 * @argc: args numCount
 * @argv: args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int tot, numCount;
	unsigned int i;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	numCount = 0;

	if (!*p)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cent[i]); i++)
			{
				if (tot >= cent[i])
				{
					numCount += tot / cent[i];
					tot = tot % cent[i];
				}
			}
		}
		if (tot == 1)
			numCount++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", numCount);
	return (0);
}
