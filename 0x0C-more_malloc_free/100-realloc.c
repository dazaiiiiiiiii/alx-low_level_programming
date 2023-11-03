#include "main.h"
#include <stdlib.h>

/**
 * _realloc - unction that reallocates a memory
 *
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * Return: ptr if success otherwise return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);
	ptr = malloc(new_size * sizeof(char));
	if (!ptr)
		return (0);
	return (ptr);
}
