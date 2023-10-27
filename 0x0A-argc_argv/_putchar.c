#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that print a char
 *
 * @c: takes input
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
