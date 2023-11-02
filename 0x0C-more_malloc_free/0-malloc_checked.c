#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 *
 * @b: takes input
 * Return: return a *p to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
