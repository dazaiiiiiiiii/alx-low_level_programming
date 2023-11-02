#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: n elements
 * @size: type's size
 * Return: return *p if success othewise return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	arr = malloc(nmemb * sizeof(unsigned int));
	if (!arr)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
