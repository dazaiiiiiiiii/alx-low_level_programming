#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print chars
 *
 * @c: take char
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
