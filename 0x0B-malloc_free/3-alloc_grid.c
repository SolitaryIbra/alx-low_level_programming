#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - output a pointer of two dimentions
 * @width: an integer
 * @height: an integer
 *
 * Return: a Pointer
 */
int **alloc_grid(int width, int height)
{
	int **array, num1, num2;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (num1 = 0; num1 < height; num1++)
	{
		array[num1] = (int *)malloc(sizeof(int) * width);
		if (array[num1] == NULL)
		{
			for (num1--; num1 >= 0; num1--)
				free(array[num1]);
			free(array);
			return (NULL);
		}
	}

	for (num1 = 0; num1 < height; num1++)
		for (num2 = 0; num2 < width; num2++)
			array[num1][num2] = 0;

	return (array);
}
