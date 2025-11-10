#include <stdlib.h>


/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: Pointer to 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
    int h;
    int w;
    int **p_height;

    if (width <= 0; || height <= 0)
    {
        return (NULL);
    }
    p_height = malloc(height * sizeof(int *));
    if (p_height == NULL)
    {
        return (NULL);
    }
    for (h = 0; h < height; h++)
    {
        p_width = malloc(width * sizeof(int));
        if (p_width == NULL)
        {
            while (w < h)
            {
            free (p_height [w]);
            w++;
            }
        free(p_height[w]);
        return (NULL);
        }
    p_height[h] = p_width;
    }
    return (p_height);
}