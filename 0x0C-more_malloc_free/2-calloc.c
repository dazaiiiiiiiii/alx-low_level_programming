#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that set the memmory allocated to
 * specified value.
 *
 * @arr: takes allocated arr
 * @i: specifed value
 * @n: size of arr
 * Return: arr
 */

char *_memset(char *arr, unsigned int i, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: n elements
 * @size: type's size
 * Return: return *p if success othewise return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (0);
	arr = malloc(nmemb * size);
	if (!arr)
		return (0);
	_memset(arr, 0, nmemb * size);
	return (arr);
}
