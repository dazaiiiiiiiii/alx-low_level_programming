#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write chars
 *
 * @c: takes input
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
