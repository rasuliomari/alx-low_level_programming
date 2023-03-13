#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **aout;
 	unsigned int x, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
	free(aout);
	return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (x = a1; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				a1++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				aout[i] = malloc((x - a1 + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
				ch_free_grid(aout, i);
				return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= x; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
