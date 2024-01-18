#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer on success, and NULL on failure
 */

int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);

	for (b = 0; min <= max; b++; min++)
		a[b] = min;

	return (a);
}
