#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: array of ints
 * @size: the size of the array
 * @action: is pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
