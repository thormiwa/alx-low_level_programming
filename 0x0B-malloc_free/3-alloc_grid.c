#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array of ints
 * @width: width of grid
 * @height: height of grid
 * Return: 2d array, NULL if fail
 **/
int **alloc_grid(int width, int height)
{
int **grid;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
grid[a] = (int *)malloc(width * sizeof(int));
if (grid[a] == NULL)
{
for (b = 0; b <= x; b++)
free(grid[y]);
free(grid);
return (NULL);
}
}

for (b = 0; b < height; b++)
{
for (a = 0; a < width; a++)
{
grid[b][a] = 0;
}
}
return (grid);
}
