#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid- returns a pointer to a 2 dimensional array of integers.
 *@width:width of the array
 *@height:height of the array
 *Return: NULL if fail, if width or height <=0 return null
 */
 
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}
