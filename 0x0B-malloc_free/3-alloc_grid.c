#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to array (Success),
 * NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (height <= 0 || width <= 0)
		return (NULL);

	/* Assign an array of pointers to the row */
	p = (int **) malloc(sizeof(int *) * height);
	if  (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Assign pointers to the column */
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			/* p[i][j] is same as *(*(p+i)+j) */
			p[i][j] = 0;
	}

	return (p);
}
