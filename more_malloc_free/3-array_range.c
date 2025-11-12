#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: Minimum integer (inclusive).
 * @max: Maximum integer (inclusive).
 *
 * Return: Pointer to the newly allocated array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *p;

	len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(len * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
