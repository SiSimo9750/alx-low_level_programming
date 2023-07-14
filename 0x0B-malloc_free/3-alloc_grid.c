#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - will creates a two dimensional ints matrix
 * @width: the width
 * @height: the height
 * Return: will return a pointer to the created matrix
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int n, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		arr[n] = (int *) malloc(sizeof(int) * width);
		if (arr[n] == NULL)
		{
			free(arr);
			for (m = 0; m <= n; m++)
				free(arr[m]);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			arr[n][m] = 0;
		}
	}
	return (arr);
}
