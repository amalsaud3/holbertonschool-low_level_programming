#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int size;
	unsigned int i;
	long range;

	if (min > max)
		return (NULL);

	range = (long)max - (long)min + 1;
	if (range > (long)(UINT_MAX / sizeof(int)))
		return (NULL);

	size = (unsigned int)range;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = (int)((long)min + i);

	return (array);
}
