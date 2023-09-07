#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 *		a 2 dimensional array of integers
 *
 * @width: input int
 * @height: input int
 *
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}
			for (i = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
