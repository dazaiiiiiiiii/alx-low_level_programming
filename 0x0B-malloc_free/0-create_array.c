#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array and initia with a char
 *
 * @size: size of array
 * @c:input
 * Return: 0 if fails return pointer if success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size < 0)
		return (0);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
