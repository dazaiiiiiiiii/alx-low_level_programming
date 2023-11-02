#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creats an array of ints
 *
 * @min: the minimum number
 * @max: the maximum number
 * Return: arr if success otherwise return NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
