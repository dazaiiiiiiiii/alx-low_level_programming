#include "main.h"
#include <unistd.h>

/**
 * _putchar - funtion that prints
 *
 * @c: takes input
 */

void _putchar(char c)
{
	write (1, &c, 1);
}
